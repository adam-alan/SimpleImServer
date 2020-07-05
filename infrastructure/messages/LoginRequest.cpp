#include "LoginRequest.hpp"

std::string LoginRequest::className() const noexcept{
    return "LoginRequest";
}

std::ostream & operator<<(std::ostream & out, const LoginRequest & loginRequest) {
    return out << loginRequest.name << " " << loginRequest.password;
}

std::istream & operator>>(std::istream & in, LoginRequest & loginRequest) {
    return in >> loginRequest.name >> loginRequest.password;
}