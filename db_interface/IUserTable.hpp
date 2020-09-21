/*
 * @Author: your name
 * @Date: 2020-06-08 17:12:23
 * @LastEditTime: 2020-09-13 22:42:29
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_interface/IUserTable.hpp
 */
#ifndef I_USER_TABLE_HPP
#define I_USER_TABLE_HPP

#include "../data_model/model/User.hpp"
#include "../project.hpp"
#include <vector>





class IUserTable
{
public:

    virtual User queryUserById(uint64_t id) = 0;
    
    virtual User queryUserByName(String name) = 0;

    virtual std::vector<User> queryUsersByName(String name) = 0;  


};
#endif // I_USER_TABLE_HPP