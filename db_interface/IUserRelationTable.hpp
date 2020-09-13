#if !defined(IUSER_RELATION_TABLE_HPP)
#define IUSER_RELATION_TABLE_HPP

#include "../infrastructure/model/UserRelation.hpp"
#include "../infrastructure/model/User.hpp"
#include "../infrastructure/project.hpp"
#include <vector>

class IUserRelationTable{
public:
    virtual uint64_t queryMaxId() = 0;
    virtual void addUserRelation(uint64_t userId, uint64_t friendId) = 0;
    virtual void removeUserRelation(uint64_t userId, uint64_t friendId) = 0;
    virtual std::vector<User> queryUserFriends(uint64_t userId) = 0;
};



#endif // IUSER_RELATION_TABLE_HPP
