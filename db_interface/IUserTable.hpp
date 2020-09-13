#ifndef I_USER_TABLE_HPP
#define I_USER_TABLE_HPP

#include "../infrastructure/model/User.hpp"
#include "../infrastructure/project.hpp"
#include <vector>





class IUserTable
{
public:

    virtual User queryUserById(uint64_t id) = 0;
    
    virtual User queryUserByName(String name) = 0;

    virtual std::vector<User> queryUsersByName(String name) = 0;  


};
#endif // I_USER_TABLE_HPP