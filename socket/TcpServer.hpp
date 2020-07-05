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
    void setAcceptHandle(std::function<void(Acceptor&)> acceptHandle);
protected:
    asio::io_context mIoContext;
    std::function<void(Acceptor&)> mAcceptHandle;
    Acceptor mAcceptor;
};


#endif