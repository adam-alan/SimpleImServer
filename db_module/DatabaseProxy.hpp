/*
 * @Author: your name
 * @Date: 2020-06-09 12:30:25
 * @LastEditTime: 2020-07-05 16:33:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/database/DatabaseService.hpp
 */ 
#ifndef DATABASE_SERVICE_HPP
#define DATABASE_SERVICE_HPP


#include "../infrastructure/project.hpp"
#include "UserTable.hpp"
#include "UserRelationTable.hpp"

class DatabaseProxy{
public:
    DatabaseProxy();
    User queryUserById(std::size_t id);
    User queryUserByName(std::string name);
    std::vector<User> queryUsersByName(std::string name);

    std::size_t queryMaxId();
    void addUserRelation(std::size_t userId, std::size_t friendId);
    void removeUserRelation(std::size_t userId, std::size_t friendId);
    std::vector<User> queryUserFriends(std::size_t userId);
private:
    DbConnPtr mDbConnPtr;
    UserTable userTable;
    UserRelationTable userRelationTable;
};



#endif