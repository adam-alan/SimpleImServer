/*
 * @Author: your name
 * @Date: 2020-07-04 13:45:54
 * @LastEditTime: 2020-09-13 22:44:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_interface/IUserRelationTable.hpp
 */
#if !defined(IUSER_RELATION_TABLE_HPP)
#define IUSER_RELATION_TABLE_HPP

#include <vector>

#include "../data_model/model/UserRelation.hpp"
#include "../data_model/model/User.hpp"
#include "../project.hpp"

class IUserRelationTable{
public:
    virtual uint64_t queryMaxId() = 0;
    virtual void addUserRelation(uint64_t userId, uint64_t friendId) = 0;
    virtual void removeUserRelation(uint64_t userId, uint64_t friendId) = 0;
    virtual std::vector<User> queryUserFriends(uint64_t userId) = 0;
};



#endif // IUSER_RELATION_TABLE_HPP
