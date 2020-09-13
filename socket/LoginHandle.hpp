/*
 * @Author: your name
 * @Date: 2020-06-28 20:04:36
 * @LastEditTime: 2020-07-05 16:26:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/LoginHandle.hpp
 */ 
#if !defined(LOGINHANDLE)
#define LOGINHANDLE

#include "../infrastructure/messages/LoginRequest.hpp"
#include "../infrastructure/messages/LoginResponce.hpp"
#include "../infrastructure/Singleton.hpp"
#include "../infrastructure/project.hpp"
#include "../database/DatabaseProxy.hpp"
#include "Connection.hpp"
using namespace boost;

void LoginHandle(std::shared_ptr<Connection> conn){
    LoginRequest loginRequest;
    std::istream in(conn->readBufferPtr().get());
    in >> loginRequest;

    auto& databaseProxy = instance<DatabaseProxy>();
    auto user = databaseProxy.queryUserByName(loginRequest.name);
    
    LoginResponce loginResponce;

    if (user.name == loginRequest.name and user.password == loginRequest.password) {
        loginResponce.isSuccess = true;
        loginResponce.user = user;
    }
    std::ostringstream osstream;
    osstream << user;
    spdlog::info("{}", osstream.str());
    auto writeBuffer = std::make_shared<StreamBuffer>();
    std::ostream out(writeBuffer.get());
    out << loginResponce.className() << " " << loginResponce;
    conn->addMessage(writeBuffer);
}



#endif // LOGINHANDLE
