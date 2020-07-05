#if !defined(PROJECT_HPP)
#define PROJECT_HPP

// for use spdlog
#define SPDLOG_FMT_EXTERNAL



#include <boost/asio.hpp>
#include <spdlog/spdlog.h>
#include <pqxx/pqxx>
#include <memory>


using Socket = boost::asio::ip::tcp::socket;
using Acceptor = boost::asio::ip::tcp::acceptor;
using StreamBuffer = boost::asio::streambuf;
using DbConn = pqxx::connection;
using ErrorCode = boost::system::error_code;
using Timer = boost::asio::deadline_timer;

using SocketPtr = std::shared_ptr<Socket>;
using StreamBufferPtr = std::shared_ptr<StreamBuffer>;
using DbConnPtr = std::shared_ptr<DbConn>;



#endif // PROJECT_HPP
