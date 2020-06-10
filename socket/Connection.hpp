#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include <boost/asio.hpp>
#include <memory>
#include <vector>

using namespace boost;


class Connection:public std::enable_shared_from_this<Connection>{
public:
    Connection(asio::ip::tcp::socket && socket);
    void read();
    void write();

private:
    asio::streambuf mWriteBuffer;  
    asio::ip::tcp::socket mSocket;
};



#endif