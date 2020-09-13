/*
 * @Author: your name
 * @Date: 2020-06-10 15:39:56
 * @LastEditTime: 2020-07-06 23:31:55
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/TcpServer.hpp
 */ 
#ifndef TCP_SERVER_HPP
#define TCP_SERVER_HPP

#include <boost/asio.hpp>
#include <functional>
#include "Connection.hpp"

using namespace boost;


class TcpServer{
public:
    TcpServer(uint16_t port);
    void start();
    void setAcceptHandle(std::function<void(IoService&, Acceptor&)> acceptHandle);
protected:
    asio::io_context mIoContext;
    std::function<void(IoService&, Acceptor&)> mAcceptHandle;
    Acceptor mAcceptor;
};


#endif