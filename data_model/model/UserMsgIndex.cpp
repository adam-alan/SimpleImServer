/*
 * @Author: your name
 * @Date: 2020-06-10 08:28:52
 * @LastEditTime: 2020-09-17 23:15:26
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/data_model/model/UserMsgIndex.cpp
 */
#include "UserMsgIndex.hpp"

#include <iostream>

std::ostream& operator<<(std::ostream& out, const UserMsgIndex& userMsgIndex){
    out << userMsgIndex.ownerId << " " << userMsgIndex.otherId << " "
        << userMsgIndex.mId << " " << userMsgIndex.type << " " << userMsgIndex.createTime;
    return out;
}


std::istream& operator>>(std::istream& in, UserMsgIndex& userMsgIndex){
    in >> userMsgIndex.ownerId >> userMsgIndex.otherId >> userMsgIndex.mId
       >> userMsgIndex.type >> userMsgIndex.createTime; 
}


