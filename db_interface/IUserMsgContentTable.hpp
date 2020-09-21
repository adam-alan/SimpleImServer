/*
 * @Author: your name
 * @Date: 2020-09-17 12:19:43
 * @LastEditTime: 2020-09-17 18:16:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_interface/IUserMsgContentTable.hpp
 */
#if !defined(I_USER_MSG_CONTENT_TABLE_HPP)
#define I_USER_MSG_CONTENT_TABLE_HPP

#include "../data_model/model/UserMsgContent.hpp"

class IUserMsgContentTable{
public:
    virtual uint64_t getMaxMsgId() = 0;
    virtual void insert(const UserMsgContent& userMsgContent) = 0;
};

#endif // I_USER_MSG_CONTENT_TABLE_HPP
