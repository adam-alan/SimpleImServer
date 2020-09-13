/*
 * @Author: your name
 * @Date: 2020-06-10 08:27:42
 * @LastEditTime: 2020-07-06 11:17:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/infrastructure/model/UserMsgContent.cpp
 */ 
#include <iostream>
#include "UserMsgContent.hpp"

std::ostream & operator<<(std::ostream & out, const UserMsgContent & userMsgContent) {
    out << userMsgContent.msgId << " " << userMsgContent.senderId << " " << 
        userMsgContent.recipientId << " " << userMsgContent.isSentBox << " "
        << userMsgContent.content << " " << userMsgContent.createTime;
    return out;
}

std::istream & operator>>(std::istream & in, UserMsgContent & userMsgContent){
    in >> userMsgContent.msgId >> userMsgContent.senderId >> userMsgContent.recipientId >> 
        userMsgContent.isSentBox >> userMsgContent.content >> userMsgContent.createTime;
    return in;
}