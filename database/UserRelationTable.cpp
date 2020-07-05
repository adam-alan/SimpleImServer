#include "UserRelationTable.hpp"

UserRelationTable::UserRelationTable(DbConnPtr dbConnPtr)
:mDbConnPtr(dbConnPtr){

}

std::size_t UserRelationTable::queryMaxId() {
    pqxx::work work{*mDbConnPtr};
    auto result = work.exec("SELECT MAX(id) FROM \"UserRelation\"");
    work.commit();
    auto maxId = result[0][0].as<std::size_t>();
    return maxId;
}


void UserRelationTable::addUserRelation(std::size_t userId, std::size_t friendId){
    auto id = queryMaxId() + 1;
    auto insertSql = "INSERT INTO \"UserRelation\" VALUES({},{},{},now(),now())";
    auto sql1 = fmt::format(insertSql, id, userId, friendId);
    auto sql2 = fmt::format(insertSql, id + 1, friendId, userId);
    pqxx::work work{*mDbConnPtr};
    work.exec(sql1);
    work.exec(sql2);
    work.commit();
}

void UserRelationTable::removeUserRelation(std::size_t userId, std::size_t friendId){
    auto deleteSql = "DELETE FROM \"UserRelation\" WHERE \"userId\" = {} AND \"friendId\" = {}";
    auto sql1 = fmt::format(deleteSql, userId, friendId);
    auto sql2 = fmt::format(deleteSql, friendId, userId);
    pqxx::work work{*mDbConnPtr};
    work.exec(sql1);
    work.exec(sql2);
    work.commit();
}

std::vector<User> UserRelationTable::queryUserFriends(std::size_t userId){
    auto sqlForQueryFriendId = fmt::format("SELECT \"friendId\" FROM \"UserRelation\" WHERE \"userId\" = {}", userId);
    auto sqlForQueryUsers = fmt::format("SELECT * FROM \"Users\" WHERE id IN ({})", sqlForQueryFriendId);
    pqxx::work work{*mDbConnPtr};
    auto rows = work.exec(sqlForQueryUsers);   
    work.commit();

    std::vector<User> users;
    
    for(auto && row: rows) {
        users.push_back(makeUserFromTableRow(row));
    }

    return users;
}