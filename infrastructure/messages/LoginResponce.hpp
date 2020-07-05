#ifndef LOGIN_RESPONCE_HPP
#define LOGIN_RESPONCE_HPP

#include <string>
#include "../model/User.hpp"

struct LoginResponce{
    bool isSuccess;
    User user;
    std::string className() const ;
    friend std::ostream & operator<<(std::ostream & out, const LoginResponce & loginResponce);
    friend std::istream & operator>>(std::istream & in, LoginResponce & loginResponce);
};


#endif