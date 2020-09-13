#if !defined(USER_SERVICE)
#define USER_SERVICE

#include "../infrastructure/project.hpp"
#include "../interfaces/IUserTable.hpp"

User makeUserFromTableRow(const pqxx::row & row);


class UserTable:public IUserTable{
public:
    UserTable(DbConnPtr dbConnPtr);
    virtual User queryUserById(std::size_t id) override;

    virtual User queryUserByName(String name) override;

    virtual std::vector<User> queryUsersByName(String name) override;
    
private:
    DbConnPtr mDbConnPtr;
};




#endif // USER_SERVICE
