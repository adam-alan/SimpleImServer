/*
 * @Author: your name
 * @Date: 2020-06-28 20:04:36
 * @LastEditTime: 2020-09-17 22:11:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/LoginHandle.hpp
 */ 
#if !defined(LOGINHANDLE)
#define LOGINHANDLE

#include "../data_model/messages/LoginRequest.hpp"
#include "../data_model/messages/LoginResponce.hpp"
#include "../project.hpp"
#include "../db_module/DbProxy.hpp"
#include "../db_module/UserTable.hpp"
#include "../db_module/UserRelationTable.hpp"
#include "Connection.hpp"
#include "ConnManager.hpp"

using namespace boost;

void LoginHandle(std::shared_ptr<Connection> conn){
    LoginRequest loginRequest;
    std::istream in(conn->readBufferPtr().get());
    in >> loginRequest;

    auto user = instance<UserTable>(instance<DbProxy>().dbConnPtr()).queryUserByName(loginRequest.name);
    
    LoginResponce loginResponce;

    if (user.name == loginRequest.name and user.password == loginRequest.password) {
        instance<ConnManager>().add(user.id, conn);
        loginResponce.isSuccess = true;
        loginResponce.user = user;
    }
    std::ostringstream osstream;
    osstream << user;
    spdlog::info("{}", osstream.str());
    
    auto users = instance<UserRelationTable>(instance<DbProxy>().dbConnPtr()).queryUserFriends(user.id);
    
    loginResponce.friends = users;

    auto writeBuffer = std::make_shared<StreamBuffer>();
    
    std::ostream out(writeBuffer.get());
    out << loginResponce.className() << " " << loginResponce << std::endl;
    std::cout << loginResponce << std::endl;
    conn->addMessage(writeBuffer);
}



#endif // LOGINHANDLE
