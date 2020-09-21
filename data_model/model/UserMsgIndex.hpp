/*
 * @Author: your name
 * @Date: 2020-06-10 08:28:23
 * @LastEditTime: 2020-09-17 23:06:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/data_model/model/UserMsgIndex.hpp
 */
#ifndef USER_MSG_INDEX_HPP
#define USER_MSG_INDEX_HPP


#include <string>

struct UserMsgIndex {
    uint64_t ownerId;
    uint64_t otherId;
    uint64_t mId;
    bool type;
    std::string createTime;


};

std::ostream& operator<<(std::ostream& out, const UserMsgIndex& userMsgIndex);
std::istream& operator>>(std::istream& in, UserMsgIndex& userMsgIndex);



#endif