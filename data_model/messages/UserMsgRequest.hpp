/*
 * @Author: your name
 * @Date: 2020-09-17 16:08:08
 * @LastEditTime: 2020-09-17 21:37:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/data_model/messages/UserMsgRequest.hpp
 */
#if !defined(USER_MSG_CONTENT_REQUEST_HPP)
#define USER_MSG_CONTENT_REQUEST_HPP

#include <string>


struct UserMsgRequest{
    uint64_t senderId;
    uint64_t recipientId;
    std::string content;

    std::string className();
};

std::ostream& operator<<(std::ostream& out, const UserMsgRequest& userMsgContent);
std::istream& operator>>(std::istream& out, UserMsgRequest& userMsgContent);



#endif // USER_MSG_CONTENT_HPP
