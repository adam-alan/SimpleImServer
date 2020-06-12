#include "DatabaseService.hpp"
#include <fmt/format.h>
#define SPDLOG_FMT_EXTERNAL
#include <spdlog/spdlog.h>

DatabaseService::DatabaseService()
:mConnection("dbname = SimpleIm user=postgres hostaddr=127.0.0.1 port=5432")
{

}

DatabaseService::~DatabaseService(){

}
User DatabaseService::queryUserById(std::size_t id) {
    pqxx::work work{mConnection};
    auto rows = work.exec(fmt::format("SELECT * FROM \"Users\" WHERE id = {}",id));
    work.commit();
    return makeUserFromTableRow(rows[0]);    
}


User DatabaseService::queryUserByName(std::string name){

}


std::vector<User> DatabaseService::queryUsersByName(std::string name){

}

User DatabaseService::makeUserFromTableRow(const pqxx::row & row) {
    User user;
    user.id = row["id"].as<std::size_t>();
    user.name = row["name"].as<std::string>();
    user.nickname = row["nickname"].as<std::string>();
    user.password = row["password"].as<std::string>();
    user.headImagePath = row["\"headImagePath\""].as<std::string>();
    user.signature = row["signature"].as<std::string>();
    user.sex = row["sex"].as<std::string>();
    user.registerTime = row["\"registerTime\""].as<std::string>();
    user.updateTime = row["\"updateTime\""].as<std::string>();
    return user;
}