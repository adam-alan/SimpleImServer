#include "Connection.hpp"
#include <iostream>

Connection::Connection(asio::ip::tcp::socket && socket)
:mSocket(std::move(socket))
{

}

void Connection::read(){

}

void Connection::write() {
    auto self{shared_from_this()};
    asio::async_write(mSocket,asio::buffer("Hello world!!!\n"),
    [this, self](system::error_code errorCode, std::size_t bytes){
        if (!errorCode){
            std::cout << "Has written " << bytes << "bytes!!" << std::endl;
            mSocket.close(); 
        } else {
            std::cout << errorCode.message() << std::endl;
        }
    });
}