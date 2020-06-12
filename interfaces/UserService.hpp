#ifndef USER_SERVICE_HPP
#define USER_SERVICE_HPP

#include "../infrastructure/model/User.hpp"
#include <string>
#include <vector>

class UserService
{
public:

    virtual User queryUserById(std::size_t id) = 0;
    
    virtual User queryUserByName(std::string name) = 0;

    virtual std::vector<User> queryUsersByName(std::string name) = 0;  
};
#endif