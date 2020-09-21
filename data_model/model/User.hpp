/*
 * @Author: your name
 * @Date: 2020-06-07 16:05:14
 * @LastEditTime: 2020-09-17 15:56:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/infrastructure/model/User.hpp
 */ 
#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <string>
#include <nlohmann/json.hpp>


using json_t = nlohmann::json;


struct User {
  uint64_t id;
  std::string name;
  std::string headImagePath;
  std::string nickname;
  std::string sex;
  std::string signature;
  std::string password;
  std::string registerTime;
  std::string updateTime;

  void from_json(const json_t& json);
  json_t to_json();
  
};


std::ostream &operator<<(std::ostream & out,const User & user);
std::istream &operator>>(std::istream & in,User & user);




#endif