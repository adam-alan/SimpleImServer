#ifndef DATABASE_SERVICE_HPP
#define DATABASE_SERVICE_HPP


#include "../infrastructure/model/User.hpp"
#include "../interfaces/UserService.hpp"
#include <pqxx/pqxx>

class DatabaseService:public UserService{
public:
    DatabaseService();
    virtual User queryUserById(std::size_t id) override;
    virtual User queryUserByName(std::string name) override;
    virtual std::vector<User> queryUsersByName(std::string name) override;
    ~DatabaseService();
private:
    User makeUserFromTableRow(const pqxx::row & row);

    pqxx::connection mConnection;
};



#endif