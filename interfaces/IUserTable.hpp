#ifndef I_USER_TABLE_HPP
#define I_USER_TABLE_HPP

#include "../infrastructure/model/User.hpp"
#include <string>
#include <vector>

class IUserTable
{
public:

    virtual User queryUserById(std::size_t id) = 0;
    
    virtual User queryUserByName(std::string name) = 0;

    virtual std::vector<User> queryUsersByName(std::string name) = 0;  

    
};
#endif // I_USER_TABLE_HPP