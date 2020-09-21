/*
 * @Author: your name
 * @Date: 2020-06-28 20:14:55
 * @LastEditTime: 2020-09-14 10:30:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_module/UserTable.hpp
 */
#if !defined(USER_SERVICE)
#define USER_SERVICE

#include "../project.hpp"
#include "../db_interface/IUserTable.hpp"

User makeUserFromTableRow(const pqxx::row & row);


class UserTable:public IUserTable{
public:
    UserTable(DbConnPtr dbConnPtr);
    virtual User queryUserById(std::size_t id) override;

    virtual User queryUserByName(String name) override;

    virtual std::vector<User> queryUsersByName(String name) override;
    
private:
    DbConnPtr mDbConnPtr;
};




#endif // USER_SERVICE
