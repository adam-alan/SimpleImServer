#include "UserRelation.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream & out,const UserRelation & userRelation) {
    out << userRelation.id << " " << userRelation.userId << " " 
        << userRelation.friendId << " " << userRelation.createTime  
        << " " << userRelation.updateTime; 
    return out;
}
std::istream &operator>>(std::istream & in,UserRelation & userRelation){
    in >> userRelation.id >> userRelation.userId >> 
        userRelation.friendId >> userRelation.createTime >> userRelation.updateTime; 
    return in;
}