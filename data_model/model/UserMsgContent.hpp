/*
 * @Author: your name
 * @Date: 2020-06-10 08:27:24
 * @LastEditTime: 2020-07-05 20:48:31
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/infrastructure/model/UserMsgContent.hpp
 */ 
#ifndef USER_MSG_CONTENT_HPP
#define USER_MSG_CONTENT_HPP

#include <string>


struct UserMsgContent {
    uint64_t msgId;
    uint64_t senderId;
    uint64_t recipientId;
    bool isSentBox;
    std::string content;
    std::string createTime;
    
    std::string className();
    friend std::ostream & operator<<(std::ostream & out, const UserMsgContent & userMsgContent);
    friend std::istream & operator>>(std::istream & in, UserMsgContent & userMsgContent);

};




#endif