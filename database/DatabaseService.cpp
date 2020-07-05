#include "DatabaseService.hpp"


DatabaseService::DatabaseService()
:mDbConnPtr(std::make_shared<DbConn>("dbname = SimpleIm user=postgres hostaddr=127.0.0.1 port=5432"))
,userTable(mDbConnPtr)
{
    
}

User DatabaseService::queryUserById(std::size_t id) {
    return userTable.queryUserById(id);
}


User DatabaseService::queryUserByName(std::string name){
    return userTable.queryUserByName(name);
}


std::vector<User> DatabaseService::queryUsersByName(std::string name){
    return userTable.queryUsersByName(name);
}
