#include "LoginResponce.hpp"


std::string LoginResponce::className() const {
    return "LoginResponce";
}


std::ostream & operator<<(std::ostream & out, const LoginResponce & loginResponce) {
    out << " " << loginResponce.isSuccess << " " << loginResponce.user;
}

std::istream & operator>>(std::istream & in, LoginResponce & loginResponce){
    in >> loginResponce.isSuccess >> loginResponce.user;
    return in;
}