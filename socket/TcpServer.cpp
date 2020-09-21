/*
 * @Author: your name
 * @Date: 2020-06-10 15:40:04
 * @LastEditTime: 2020-09-16 17:17:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/TcpServer.cpp
 */ 
#include "TcpServer.hpp"

using boost::asio::ip::address;

TcpServer::TcpServer(uint16_t port)
:mIoContext()
,mAcceptor(mIoContext, {address::from_string("127.0.0.1"),port})
{
    
}

void TcpServer::start() {
    mAcceptHandle(mIoContext, mAcceptor);
    // spdlog::info("{}","start accept");
    mIoContext.run();
}


void TcpServer::setAcceptHandle(std::function<void(IoService&,Acceptor&)> acceptHandle){
    mAcceptHandle = acceptHandle;
}

