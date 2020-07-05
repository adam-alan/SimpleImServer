#include "UserTable.hpp"
#include <fmt/format.h>


UserTable::UserTable(DbConnPtr dbConnPtr)
:mDbConnPtr(dbConnPtr){

}



User UserTable::queryUserById(std::size_t id){
    pqxx::work work{*mDbConnPtr};
    auto rows = work.exec(fmt::format("SELECT * FROM \"Users\" WHERE id = {}",id));
    work.commit();
    User user;
    if (rows.size() == 1) {
        user = makeUserFromTableRow(rows[0]);
    }
    return user;    
}

User UserTable::queryUserByName(std::string name){
    
    pqxx::work work{*mDbConnPtr};
    auto rows = work.exec(fmt::format("SELECT * FROM \"Users\" WHERE name = '{}'",name));
    work.commit();
    User user;
    if (rows.size() == 1) {
        user = makeUserFromTableRow(rows[0]);
    }
    return user;   
}

std::vector<User> UserTable::queryUsersByName(std::string name){
    pqxx::work work{*mDbConnPtr};
    std::string sql = fmt::format("SELECT * FROM \"Users\" WHERE name LIKE {}",name);
    auto rows = work.exec(sql);
    work.commit();
    std::vector<User> users;
    for (auto &&row : rows) {
        users.push_back(makeUserFromTableRow(row));
    }

    return users;    
} 



User makeUserFromTableRow(const pqxx::row & row) {
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