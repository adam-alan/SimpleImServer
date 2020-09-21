/*
 * @Author: your name
 * @Date: 2020-09-17 16:16:43
 * @LastEditTime: 2020-09-17 21:45:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/data_model/messages/UserMsgResponce.hpp
 */
#if !defined(USER_MSG_CONTENT_RESPONCE_HPP)
#define USER_MSG_CONTENT_RESPONCE_HPP

#include <string>
#include <iostream>


struct UserMsgResponce{
    uint64_t senderId;
    std::string content;
    std::string className();
};

std::ostream& operator<<(std::ostream& out, const UserMsgResponce& userMsgResponce);
std::istream& operator<<(std::istream& in, UserMsgResponce& userMsgResponce);




#endif // USER_MSG_CONTENT_RESPONCE_HPP
