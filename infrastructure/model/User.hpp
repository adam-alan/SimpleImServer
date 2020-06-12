#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <string>


struct User {
  std::size_t id;
  std::string name;
  std::string headImagePath;
  std::string nickname;
  std::string sex;
  std::string signature;
  std::string password;
  std::string registerTime;
  std::string updateTime;

  friend std::ostream &operator<<(std::ostream & out,const User & user);
};
  


#endif