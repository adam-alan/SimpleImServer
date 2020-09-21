/*
 * @Author: your name
 * @Date: 2020-07-04 14:11:00
 * @LastEditTime: 2020-09-13 22:37:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/database/UserRelationTable.hpp
 */ 
#if !defined(USER_RELATION_TABLE_HPP)
#define USER_RELATION_TABLE_HPP

#include "../data_model/model/UserRelation.hpp"
#include "../db_interface/IUserRelationTable.hpp"
#include "UserTable.hpp"

class UserRelationTable: public IUserRelationTable{
public:
    UserRelationTable(DbConnPtr dbConnPtr);
    virtual std::size_t queryMaxId() override;
    virtual void addUserRelation(std::size_t userId, std::size_t friendId) override;
    virtual void removeUserRelation(std::size_t userId, std::size_t friendId) override;
    virtual std::vector<User> queryUserFriends(std::size_t userId) override;
private:
    DbConnPtr mDbConnPtr;
};



#endif // USER_RELATION_TABLE_HPP
