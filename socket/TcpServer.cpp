#include "TcpServer.hpp"

using boost::asio::ip::address;

TcpServer::TcpServer(uint16_t port)
:mIoContext()
,mAcceptor(mIoContext, {address::from_string("127.0.0.1"),port})
{
    
}

void TcpServer::start() {
    mAcceptHandle(mAcceptor);
    mIoContext.run();
}


void TcpServer::setAcceptHandle(std::function<void(asio::ip::tcp::acceptor&)> acceptHandle){
    mAcceptHandle = acceptHandle;
}

