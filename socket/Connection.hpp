#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include <boost/asio.hpp>
#include <memory>
#include <vector>
#include <unordered_map>
#include <functional>
using namespace boost;


class Connection:public std::enable_shared_from_this<Connection>{
public:
    Connection(asio::ip::tcp::socket && socket);
    void read();
    void write();
    void loginHandler();
    //void messageHandler();

private:
    std::unordered_map<std::string, std::function<void()>> handlers;
    asio::streambuf mReadBuffer;
    asio::streambuf mWriteBuffer;  
    asio::ip::tcp::socket mSocket;
};



#endif