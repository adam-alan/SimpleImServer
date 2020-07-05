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
};




#endif