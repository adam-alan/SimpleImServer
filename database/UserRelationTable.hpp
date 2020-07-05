#if !defined(USER_RELATION_TABLE_HPP)
#define USER_RELATION_SERVICE_HPP

#include "../infrastructure/project.hpp"
#include "../interfaces/IUserRelationTable.hpp"
#include "UserTable.hpp"

class UserRelationTable: public IUserRelationTable{
public:
    UserRelationTable(DbConnPtr dbConnPtr);
    virtual std::size_t queryMaxId() override;
    virtual void addUserRelation(std::size_t userId, std::size_t friendId) override;
    virtual void removeUserRelation(std::size_t userId, std::size_t friendId) override;
    virtual std::vector<User> queryUserFriends(std::size_t userId) override;
private:
    DbConnPtr mDbConnPtr;
};



#endif // USER_RELATION_SERVICE_HPP
