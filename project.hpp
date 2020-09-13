/*
 * @Author: your name
 * @Date: 2020-07-02 22:48:49
 * @LastEditTime: 2020-07-16 17:50:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/../infrastructure/project.hpp
 */ 
#if !defined(PROJECT_HPP)
#define PROJECT_HPP

// for use spdlog
#define SPDLOG_FMT_EXTERNAL



#include <boost/asio.hpp>
#include <spdlog/spdlog.h>
#include <pqxx/pqxx>
#include <memory>
#include <tbb/concurrent_hash_map.h>
#include <unordered_map>
#include <string_view>


//class from boost

using IoService = boost::asio::io_context;
using Socket = boost::asio::ip::tcp::socket;
using Acceptor = boost::asio::ip::tcp::acceptor;
using StreamBuffer = boost::asio::streambuf;
using DbConn = pqxx::connection;
using ErrorCode = boost::system::error_code;
using Timer = boost::asio::deadline_timer;


//Ptrs for pqxx::connection,boost::asio::streambuf,boost::asio::ip::tcp::socket 
using SocketPtr = std::shared_ptr<Socket>;
using StreamBufferPtr = std::shared_ptr<StreamBuffer>;
using DbConnPtr = std::shared_ptr<DbConn>;


template<typename Key, typename Value>
using ConcurrentMap = tbb::interface5::concurrent_hash_map<Key, Value>;

template<typename Key, typename Value>
using Map = std::unordered_map<Key, Value>;

using String = std::string_view;


#endif // PROJECT_HPP
