/*
 * @Author: your name
 * @Date: 2020-09-17 13:50:31
 * @LastEditTime: 2020-09-17 21:38:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_module/UserMsgIndexTable.hpp
 */
#if !defined(USER_MSG_INDEX_TABLE_HPP)
#define USER_MSG_INDEX_TABLE_HPP


#include "../db_interface/IUserMsgIndexTable.hpp"
#include "../project.hpp"


UserMsgIndex makeUserMsgIndexFromTableRow(const pqxx::row& row);

class UserMsgIndexTable:public IUserMsgIndexTable{
public:
    UserMsgIndexTable(DbConnPtr dbConnPtr);
    virtual void insert(const UserMsgIndex& userMsgIndex) override;
private:
    DbConnPtr dbConnPtr_;
};



#endif // USER_MSG_INDEX_HPP
