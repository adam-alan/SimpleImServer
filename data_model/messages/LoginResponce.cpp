/*
 * @Author: your name
 * @Date: 2020-06-10 17:59:59
 * @LastEditTime: 2020-09-16 21:31:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/data_model/messages/loginResponce.cpp
 */
#include "LoginResponce.hpp"


std::string LoginResponce::className() const {
    return "LoginResponce";
}


std::ostream & operator<<(std::ostream & out, const LoginResponce & loginResponce) {
    out << loginResponce.isSuccess << " " << loginResponce.user;
    for (auto item: loginResponce.friends){
        out << " " << item;
    }
    return out;
}

std::istream & operator>>(std::istream & in, LoginResponce & loginResponce){
    in >> loginResponce.isSuccess >> loginResponce.user;
    
    User user;
    // std::cout << fr << std::endl;
    // for (int i = 0;i < 10;++i){
    //     in >> user;
    //     std::cout << user << std::endl;
    //     loginResponce.friends.push_back(user);
    // }


    while(in >> user){
        loginResponce.friends.push_back(user);
    }   

    return in;
}