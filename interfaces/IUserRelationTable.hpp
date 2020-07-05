#if !defined(IUSER_RELATION_TABLE_HPP)
#define IUSER_RELATION_TABLE_HPP

#include "../infrastructure/model/UserRelation.hpp"
#include "../infrastructure/model/User.hpp"
#include <vector>

class IUserRelationTable{
public:
    virtual std::size_t queryMaxId() = 0;
    virtual void addUserRelation(std::size_t userId, std::size_t friendId) = 0;
    virtual void removeUserRelation(std::size_t userId, std::size_t friendId) = 0;
    virtual std::vector<User> queryUserFriends(std::size_t userId) = 0;
};



#endif // IUSER_RELATION_TABLE_HPP
