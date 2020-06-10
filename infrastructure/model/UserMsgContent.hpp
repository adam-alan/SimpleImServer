#ifndef USER_MSG_CONTENT_HPP
#define USER_MSG_CONTENT_HPP

#include <string>


struct UserMsgContent {
    std::size_t msgId;
    std::size_t senderId;
    std::size_t recipientId;
    bool isSentBox;
    std::string content;
    std::string createTime;
};




#endif