/*
 * @Author: loadstar
 * @Date: 2020-06-09 12:30:38
 * @LastEditTime: 2020-07-05 16:34:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/database/DatabaseService.cpp
 */ 
#include "DatabaseProxy.hpp"


DatabaseProxy::DatabaseProxy()
:mDbConnPtr(std::make_shared<DbConn>("dbname = SimpleIm user=postgres hostaddr=127.0.0.1 port=5432"))
,userTable(mDbConnPtr)
,userRelationTable(mDbConnPtr)
{
    
}

User DatabaseProxy::queryUserById(std::size_t id) {
    return userTable.queryUserById(id);
}


User DatabaseProxy::queryUserByName(std::string name){
    return userTable.queryUserByName(name);
}


std::vector<User> DatabaseProxy::queryUsersByName(std::string name){
    return userTable.queryUsersByName(name);
}

std::size_t DatabaseProxy::queryMaxId() {
    return userRelationTable.queryMaxId();
}

void DatabaseProxy::addUserRelation(std::size_t userId, std::size_t friendId){
    userRelationTable.addUserRelation(userId, friendId);
}


void DatabaseProxy::removeUserRelation(std::size_t userId, std::size_t friendId){
    userRelationTable.removeUserRelation(userId, friendId);
}

std::vector<User> DatabaseProxy::queryUserFriends(std::size_t userId){
    return userRelationTable.queryUserFriends(userId);
}

