/*
 * @Author: your name
 * @Date: 2020-06-10 15:22:55
 * @LastEditTime: 2020-07-12 23:28:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/Connection.cpp
 */ 
#include "Connection.hpp"

Connection::Connection(IoService & ioService, Socket && socket)
:mSocket(std::move(socket)),
handlers(),
mReadBuffer(std::make_shared<StreamBuffer>()),
mSendQueue(),
timer(ioService, boost::posix_time::seconds(3)),
clickNum(3)
{
    
}


void Connection::start() {
    read();
    wait();
    
}

void Connection::read(){
    auto self{shared_from_this()};
    auto readHandle = 
    [this, self](ErrorCode errorCode, std::size_t bytes){
        if (!errorCode){
            std::istream in(mReadBuffer.get());
            std::string name;
            in >> name;
            spdlog::info("{}", name);
            try {
                handlers.at(name)(self);
            }catch (std::exception & e) {
                spdlog::info("{}", e.what());
            }
            
            read();
        }
    };

    boost::asio::async_read_until(mSocket,*mReadBuffer,"\n", readHandle);
}

StreamBufferPtr Connection::readBufferPtr() {
    return mReadBuffer;
}

void Connection::addHandle(String name, Handle handle){
    this->handlers.insert({name, handle});
}

void Connection::addMessage(StreamBufferPtr streamBufferPtr){
    auto isWritting = not mSendQueue.empty();
    mSendQueue.push(streamBufferPtr);
    
    if (!isWritting) {
        write();
    }
}

void Connection::write() {
    auto self(shared_from_this());
    auto writeHandle = 
    [this, self](ErrorCode errorCode, std::size_t bytes){
        if (!errorCode) {
          
            mSendQueue.pop();            
            if (!mSendQueue.empty()) {
                write();
            }
        } else {
            spdlog::info("{}", errorCode.message());
        }
    };

    boost::asio::async_write(mSocket, *mSendQueue.front(), writeHandle);
}


void Connection::forceClose(){
    
}

void Connection::wait() {
    auto self{shared_from_this()};
    auto timerHandle = 
    [this, self](ErrorCode errorCode){
        clickNum -= 1;
        if (clickNum < 0) {
            forceClose();
        } else {
            wait();
        }
    };

    timer.async_wait(timerHandle);
}