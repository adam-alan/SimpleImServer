/*
 * @Author: your name
 * @Date: 2020-06-06 23:38:39
 * @LastEditTime: 2020-09-13 22:10:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/main.cpp
 */ 
#include "data_model/project.hpp"
#include "socket/TcpServer.hpp"
#include "socket/LoginHandle.hpp"


void doAccept(IoService & ioService, Acceptor& acceptor){
    auto acceptorHandle = 
    [&acceptor, &ioService](ErrorCode errorCode, Socket socket){

        if (!errorCode) {      
            auto remoteEndpoint = socket.remote_endpoint();
            spdlog::info("A new Connection from {}:{}", remoteEndpoint.address().to_string(), remoteEndpoint.port());
            auto conn = std::make_shared<Connection>(ioService, std::move(socket));
            conn->addHandle("LoginRequest",std::bind(&LoginHandle, std::placeholders::_1));             
            conn->start();
            //conn->addMessage("Hello!!");
        }

        doAccept(ioService, acceptor);

    };
    
    acceptor.async_accept(acceptorHandle);
}



int main(int argc, char *argv[]) {
  
    // auto server = std::make_shared<TcpServer>(12345);
    // server->setAcceptHandle(std::bind(doAccept, std::placeholders::_1, std::placeholders::_2));
    // spdlog::info("{}","start accept");
    // server->start();
    // auto dbConnPtr = std::make_shared<DbConn>("dbname = SimpleIm user=postgres hostaddr=127.0.0.1 port=5432");
    // UserRelationTable userRelationTable(dbConnPtr);
    // for (int i = 0; i < 4;i++){
    //     auto users = userRelationTable.queryUserFriends(i);
    //     for (User user: users) {
    //         std::cout << user << std::endl;
    //     } 
    // }

    // uint64_t num = 123ull;
    // std::cout << num << std::endl;
    // spdlog::info("{}",sizeof(std::vector<int>));
    // spdlog::info("{}",sizeof(std::string));


    
    return 0;
}



