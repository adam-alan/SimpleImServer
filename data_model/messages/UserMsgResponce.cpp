/*
 * @Author: your name
 * @Date: 2020-09-17 16:17:43
 * @LastEditTime: 2020-09-17 21:45:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/data_model/messages/UserMsgResponce.cpp
 */
#include "UserMsgResponce.hpp"


std::string UserMsgResponce::className() {
    return "UserMsgResponce";
}


std::ostream& operator<<(std::ostream& out, const UserMsgResponce& userMsgResponce){
    out << userMsgResponce.senderId << " " << userMsgResponce.content;
    return out;
}
std::istream& operator<<(std::istream& in, UserMsgResponce& userMsgResponce){
    in >> userMsgResponce.senderId >> userMsgResponce.content;
    return in;
}
