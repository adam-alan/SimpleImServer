#include "User.hpp"

 
std::ostream &operator<<(std::ostream & out,const User & user) {
    out << user.id << " " << user.name << " " << user.nickname << " "
        << user.password << " " << user.headImagePath << " " 
        << user.signature << " " << user.sex << " " << user.registerTime << " " << user.updateTime;
    return out;
}

std::istream &operator>>(std::istream & in,User & user){
    in >> user.id >> user.name >> user.nickname >> user.password
        >> user.headImagePath >> user.signature >> user.sex >> user.registerTime >> user.updateTime;
    return in;
}

json_t User::to_json(){
    json_t json;
    json["id"] = this->id;
    json["name"] = this->name;
    json["nickname"] = this->nickname;
    json["password"] = this->password;
    return json;
}

void User::from_json(const json_t& json){

}