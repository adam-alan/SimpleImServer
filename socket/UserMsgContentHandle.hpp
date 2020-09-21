/*
 * @Author: your name
 * @Date: 2020-09-17 17:21:30
 * @LastEditTime: 2020-09-17 23:03:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/UserMsgContentHandle.hpp
 */
#if !defined(USER_MSG_CONTENT_HANDLE_HPP)
#define USER_MSG_CONTENT_HANDLE_HPP


#include "../data_model/messages/UserMsgRequest.hpp"
#include "../data_model/messages/UserMsgResponce.hpp"
#include "../data_model/model/UserMsgIndex.hpp"
#include "../data_model/model/UserMsgContent.hpp"

#include "../db_module/UserMsgContentTable.hpp"
#include "../db_module/UserMsgIndexTable.hpp"
#include "../db_module/DbProxy.hpp"

#include "Connection.hpp"
#include "ConnManager.hpp"


void UserMsgContentHandle(ConnPtr connPtr){
    UserMsgRequest userMsgRequest;
    std::istream in(connPtr->readBufferPtr().get());
    in >> userMsgRequest;
    UserMsgContent content{};

    UserMsgIndex sender{};
    UserMsgIndex recipient{}; 

    auto& userMsgContentTable = instance<UserMsgContentTable>(instance<DbProxy>().dbConnPtr());
    auto& userMsgIndexTable = instance<UserMsgIndexTable>(instance<DbProxy>().dbConnPtr());
    uint64_t mid = userMsgContentTable.getMaxMsgId() + 1;
    
    //存消息
    content.msgId = mid;
    content.senderId = userMsgRequest.senderId;
    content.recipientId = userMsgRequest.recipientId;
    content.content = userMsgRequest.content;
    // userMsgContentTable.insert(content);

    // content
    
    
    //存发件人的发件箱
    sender.mId = mid;
    sender.ownerId = userMsgRequest.senderId;
    sender.otherId = userMsgRequest.recipientId;
    sender.type = false;
    // userMsgIndexTable.insert(sender);


    //存收件人的收件箱
    recipient.mId = mid;
    recipient.ownerId = userMsgRequest.recipientId;
    recipient.ownerId = userMsgRequest.senderId;
    recipient.type = true;
    // userMsgIndexTable.insert(recipient);

    //获取收件人连接
    auto recipientConnPtr = instance<ConnManager>().getConnByUserId(userMsgRequest.recipientId);
    //生成消息
    
    std::cout << content << std::endl;

    std::cout << sender << std::endl;
    std::cout << recipient << std::endl;
    
    UserMsgResponce msgResponce;
    msgResponce.senderId = userMsgRequest.senderId;
    msgResponce.content = userMsgRequest.content;
    //发送到收件人
    if (recipientConnPtr != nullptr){
        auto buffer = std::make_shared<StreamBuffer>();
        std::ostream out(buffer.get());
        out << msgResponce.className() << " " << msgResponce << std::endl;
        recipientConnPtr->addMessage(buffer);
    }

}







#endif // USER_MSG_CONTENT_HANDLE_HPP
