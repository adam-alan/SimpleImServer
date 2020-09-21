/*
 * @Author: your name
 * @Date: 2020-06-06 23:38:39
 * @LastEditTime: 2020-09-17 22:09:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/main.cpp
 */ 
#include "project.hpp"
#include "socket/TcpServer.hpp"
#include "socket/LoginHandle.hpp"
#include "socket/UserMsgContentHandle.hpp"

void doAccept(IoService & ioService, Acceptor& acceptor){
    auto acceptorHandle = 
    [&acceptor, &ioService](ErrorCode errorCode, Socket socket){

        if (!errorCode) {      
            auto remoteEndpoint = socket.remote_endpoint();
            // spdlog::info("A new Connection from {}:{}", remoteEndpoint.address().to_string(), remoteEndpoint.port());
            auto conn = std::make_shared<Connection>(ioService, std::move(socket));
            conn->addHandle("LoginRequest",std::bind(&LoginHandle, std::placeholders::_1));             
            conn->addHandle("UserMsgRequest", std::bind(&UserMsgContentHandle, std::placeholders::_1));
            conn->start();

            auto buffer = std::make_shared<StreamBuffer>();
            
            std::ostream out(buffer.get());
            out << "Hello" << std::endl;
            conn->addMessage(buffer);
        }

        doAccept(ioService, acceptor);

    };
    
    acceptor.async_accept(acceptorHandle);
}



int main(int argc, char *argv[]) {
  
    auto server = std::make_shared<TcpServer>(12345);
    server->setAcceptHandle(std::bind(doAccept, std::placeholders::_1, std::placeholders::_2));
    server->start();
    // IoService ioService;
    // boost::asio::posix::stream_descriptor out(ioService, ::dup(STDOUT_FILENO));
    
    // boost::asio::async_write(out, boost::asio::buffer("ssssss"),
    // [](ErrorCode,size_t){
        
    // });
    // spdlog::info("{}", sizeof(LoginResponce));
    // ioService.run();
    
    // User user;
    // user.id = 0;
    // user.name = "loadstar";
    // user.nickname = "陌小路";
    // user.password = "honest==";
    // user.sex = "男";
    // user.headImagePath = "none";
    // user.signature = "none";

    // user.registerTime = "2020-06-08 16:51:09.351118+08";
    // user.updateTime = "2020-06-08 16:51:09.351118+08";
    

    // int index = user.registerTime.find(' ');
    // user.registerTime[index] = '+';
    
    // index = user.updateTime.find(' ');
    // user.updateTime[index] = '+';


    // LoginResponce loginResponce;
    
    // loginResponce.isSuccess = false;
    // loginResponce.user = user;

    // for(int i = 0;i < 10;i++){
    //     loginResponce.friends.push_back(user);
    // }


    // auto buffer = std::make_shared<StreamBuffer>();

    // std::ostream out(buffer.get());

    // std::istream in(buffer.get());
    
    // std::cout << user << std::endl;


    // std::cout << loginResponce << std::endl;

    // out << loginResponce;

    // std::cout << buffer->size() << std::endl;

    // LoginResponce other;
    // in >> other;

    // // std::cout << other.user.name << std::endl;

    // std::cout << other << std::endl;

    return 0;
}



