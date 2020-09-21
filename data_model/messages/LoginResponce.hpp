/*
 * @Author: your name
 * @Date: 2020-06-10 17:59:48
 * @LastEditTime: 2020-09-16 18:09:27
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/data_model/messages/LoginResponce.hpp
 */
#ifndef LOGIN_RESPONCE_HPP
#define LOGIN_RESPONCE_HPP

#include <string>
#include <vector>
#include "../model/User.hpp"

struct LoginResponce{
    bool isSuccess;
    User user;
    std::vector<User> friends;

    std::string className() const ;
    friend std::ostream & operator<<(std::ostream & out, const LoginResponce & loginResponce);
    friend std::istream & operator>>(std::istream & in, LoginResponce & loginResponce);
};


#endif