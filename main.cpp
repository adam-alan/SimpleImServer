#include <iostream>
#include <memory>
#define SPDLOG_FMT_EXTERNAL

#include "infrastructure/model/User.hpp"
#include <pqxx/pqxx>
#include <spdlog/spdlog.h>
#include "application/DatabaseService.hpp"
#include <nlohmann/json.hpp>

using json_t = nlohmann::json;

int main(int argc, char *argv[]) {
    DatabaseService databaseService;
    User user = databaseService.queryUserById(1000);
    spdlog::info("{} {} {} {} {} {} {} {} {}", user.id, user.name, user.nickname, 
        user.password, user.headImagePath, user.signature, user.sex, user.registerTime, user.updateTime);
    json_t json;
    json["id"] = user.id;
    json["name"] = user.name;
    json["nickname"] = user.nickname;
    json["password"] = user.password; 
    json["headImagePath"] = user.headImagePath; 
    json["signature"] = user.signature; 
    json["sex"] = user.sex;
    json["registerTime"] = user.registerTime; 
    json["updateTime"] = user.updateTime;
    std::cout << json.dump(4) << std::endl;
    std::unordered_set<int> u;
    spdlog::info("({})","Hello world!");
    return 0;
}
