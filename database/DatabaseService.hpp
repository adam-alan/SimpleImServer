#ifndef DATABASE_SERVICE_HPP
#define DATABASE_SERVICE_HPP


#include "../infrastructure/project.hpp"
#include "UserTable.hpp"

class DatabaseService{
public:
    DatabaseService();
    User queryUserById(std::size_t id);
    User queryUserByName(std::string name);
    std::vector<User> queryUsersByName(std::string name);
private:
    DbConnPtr mDbConnPtr;
    UserTable userTable;

};



#endif