/*
 * @Author: your name
 * @Date: 2020-09-17 18:13:04
 * @LastEditTime: 2020-09-17 18:19:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_module/UserMsgContentTable.hpp
 */


#include "../db_interface/IUserMsgContentTable.hpp"
#include "../project.hpp"


UserMsgContent makeUserMsgContentFromRow(const pqxx::row& row);

class UserMsgContentTable: public IUserMsgContentTable{
public:
    UserMsgContentTable(DbConnPtr dbConnPtr);
    virtual uint64_t getMaxMsgId() override;
    virtual void insert(const UserMsgContent& userMsgContent) override;
private:

    DbConnPtr dbConnPtr_;

};