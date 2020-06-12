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
    std::cout << user << std::endl;
    // spdlog::info("{} {} {} {} {} {} {} {} {}", user.id, user.name, user.nickname, 
    //     user.password, user.headImagePath, user.signature, user.sex, user.registerTime, user.updateTime);
    
    asio::io_context ioContext;
    TcpServer server(ioContext, 12345);
    spdlog::info("{}","start accept");
    boost::asio::deadline_timer timer(ioContext,boost::posix_time::seconds(30));
    server.start();
    
    timer.async_wait(
    [&ioContext](const boost::system::error_code& error ){
        if (!error) {
            spdlog::info("{}","Hello world!!!");
            ioContext.post(
                [&ioContext](){
                    ioContext.stop();
                }
            );
        }
        
    });
    ioContext.run();    
    return 0;
}



