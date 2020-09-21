/*
 * @Author: your name
 * @Date: 2020-06-10 08:27:24
 * @LastEditTime: 2020-09-17 21:36:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/infrastructure/model/UserMsgContent.hpp
 */ 
#if !defined(USER_MSG_CONTENT_HPP)
#define USER_MSG_CONTENT_HPP

#include <string>


struct UserMsgContent {
    uint64_t msgId;
    uint64_t senderId;
    uint64_t recipientId;
    std::string content;
    std::string createTime;
    
    std::string className();
    friend std::ostream & operator<<(std::ostream & out, const UserMsgContent & userMsgContent);
    friend std::istream & operator>>(std::istream & in, UserMsgContent & userMsgContent);

};




#endif