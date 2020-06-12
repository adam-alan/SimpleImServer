#include "Connection.hpp"
#include <iostream>
#include "../infrastructure/messages/LoginRequest.hpp"
Connection::Connection(asio::ip::tcp::socket && socket)
:mSocket(std::move(socket)),
handlers(),
mReadBuffer(),
mWriteBuffer()
{
    handlers.insert({"LoginRequest", std::bind(&Connection::loginHandler, this)});
    //handlers["LoginRequest"] = std::bind(&Connection::loginHandler, this);
}

void Connection::read(){
    auto self{shared_from_this()};
    asio::async_read_until(mSocket,mReadBuffer,"\n",
    [this, self](system::error_code errorCode, std::size_t bytes){
        if (!errorCode){
            std::istream in(&mReadBuffer);
            std::string name;
            in >> name;
            handlers[name]();
        }
    }
    );
}

void Connection::write() {

    auto self{shared_from_this()};
    std::ostream out(&mWriteBuffer);
    out << "Hello world to Server!!!" << std::endl;
    asio::async_write(mSocket,mWriteBuffer,
    [this, self](system::error_code errorCode, std::size_t bytes){
        if (!errorCode){
            std::cout << "Has written " << bytes << "bytes!!" << std::endl;
            mSocket.close(); 
        } else {
            std::cout << errorCode.message() << std::endl;
        }
    });
}

void Connection::loginHandler() {
    LoginRequest request;
    std::istream in(&mReadBuffer);
    in >> request;
    std::cout << request << std::endl;
}