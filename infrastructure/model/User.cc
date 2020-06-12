#include "User.hpp"

 
std::ostream &operator<<(std::ostream & out,const User & user) {
    out << user.id << " " << user.name << " " << user.nickname << " "
        << user.password << " " << user.headImagePath << " " 
        << user.signature << " " << user.sex << " " << user.registerTime << " " << user.updateTime;
    return out;
}