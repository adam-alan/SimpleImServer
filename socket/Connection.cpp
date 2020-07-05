#include "Connection.hpp"

Connection::Connection(Socket && socket)
:mSocket(std::move(socket)),
handlers(),
mReadBuffer(std::make_shared<StreamBuffer>()),
mSendQueue()
{
    
}


void Connection::start() {
    read();
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

void Connection::addHandle(std::string name, std::function<void(std::shared_ptr<Connection>)> handle){
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
