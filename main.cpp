#include <iostream>
#include <memory>
#define SPDLOG_FMT_EXTERNAL

#include "infrastructure/model/User.hpp"
#include <pqxx/pqxx>
#include <spdlog/spdlog.h>
#include "application/DatabaseService.hpp"
#include "socket/TcpServer.hpp"


int main(int argc, char *argv[]) {
    DatabaseService databaseService;
    User user = databaseService.queryUserById(1000);
    spdlog::info("{} {} {} {} {} {} {} {} {}", user.id, user.name, user.nickname, 
        user.password, user.headImagePath, user.signature, user.sex, user.registerTime, user.updateTime);
  
    spdlog::info("({})","Hello world!");
    asio::io_context ioContext;
    TcpServer server(ioContext, 12345);
    spdlog::info("{}","start accept");
    server.start();
    ioContext.run();
    return 0;
}



