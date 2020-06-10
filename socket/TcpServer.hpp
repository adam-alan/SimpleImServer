#ifndef TCP_SERVER_HPP
#define TCP_SERVER_HPP

#include <boost/asio.hpp>
using namespace boost;


class TcpServer{
public:
    TcpServer(asio::io_context & ioContext, short port);
    void start();
    void doAccept();
private:
    asio::ip::tcp::acceptor acceptor;
};


#endif