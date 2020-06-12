#include "TcpServer.hpp"
#include "Connection.hpp"
TcpServer::TcpServer(asio::io_context & ioContext, short port)
:acceptor(ioContext, {asio::ip::address::from_string("127.0.0.1"),port}){

}

void TcpServer::start() {
    doAccept();
}



void TcpServer::doAccept() {
    acceptor.async_accept(
    [this](system::error_code errorCode, asio::ip::tcp::socket socket){
        if (!errorCode) {
            auto conn = std::make_shared<Connection>(std::move(socket));
            conn->read();
        }
        doAccept();
    }
    );
}