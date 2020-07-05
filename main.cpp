#include "infrastructure/project.hpp"
#include "socket/TcpServer.hpp"
#include "socket/LoginHandle.hpp"



void doAccept(Acceptor& acceptor){
    auto acceptorHandle = 
    [&acceptor](ErrorCode errorCode, Socket socket){

        if (!errorCode) {      
    
            auto conn = std::make_shared<Connection>(std::move(socket));
            conn->addHandle("LoginRequest",std::bind(&LoginHandle, std::placeholders::_1));             
            conn->start();
        }

        doAccept(acceptor);

    };
    
    acceptor.async_accept(acceptorHandle);
}

#include "database/UserRelationTable.hpp"

int main(int argc, char *argv[]) {
  
    // auto server = std::make_shared<TcpServer>(12345);
    // server->setAcceptHandle(std::bind(doAccept, std::placeholders::_1));
    // spdlog::info("{}","start accept");
    // server->start();
    auto dbConnPtr = std::make_shared<DbConn>("dbname = SimpleIm user=postgres hostaddr=127.0.0.1 port=5432");
    UserRelationTable userRelationTable(dbConnPtr);
    for (int i = 0; i < 4;i++){
        auto users = userRelationTable.queryUserFriends(i);
        for (User user: users) {
            std::cout << user << std::endl;
        } 
    }

    return 0;
}



