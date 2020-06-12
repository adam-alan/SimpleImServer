#ifndef LOGIN_REQUEST_HPP
#define LOGIN_REQUEST_HPP

#include <string>
#include <iostream>


struct LoginRequest{
    std::string name;
    std::string password;
    std::string className() const noexcept;
    friend std::ostream & operator<<(std::ostream & out, const LoginRequest & loginRequest);
    friend std::istream & operator>>(std::istream & in, LoginRequest & loginRequest);
};


#endif
