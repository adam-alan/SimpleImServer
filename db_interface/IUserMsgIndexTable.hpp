/*
 * @Author: your name
 * @Date: 2020-09-17 12:19:57
 * @LastEditTime: 2020-09-17 13:50:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_interface/IUserMsgIndexTable.hpp
 */

#if !defined(I_USER_MSG_INDEX_TABLE_HPP)
#define I_USER_MSG_INDEX_TABLE_HPP


#include "../data_model/model/UserMsgIndex.hpp"



class IUserMsgIndexTable
{
public:
    virtual void insert(const UserMsgIndex& userMsgIndex) = 0;
};



#endif // I_USER_MSG_INDEX_TABLE_HPP

