/*
 * @Author: your name
 * @Date: 2020-09-17 16:12:04
 * @LastEditTime: 2020-09-17 16:15:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/data_model/messages/UserMsgRequest.cpp
 */
#include "UserMsgRequest.hpp"
#include <iostream>

std::string UserMsgRequest::className(){
    return  "UserMsgRequest";
}



std::ostream& operator<<(std::ostream& out, const UserMsgRequest& userMsgContent){
    out << userMsgContent.senderId << " " << userMsgContent.recipientId << " " << userMsgContent.content;
    return out;
}

std::istream& operator>>(std::istream& in, UserMsgRequest& userMsgContent){
    in >> userMsgContent.senderId >> userMsgContent.recipientId >> userMsgContent.content;
    return in;
}
