/*
 * @Author: your name
 * @Date: 2020-09-17 13:50:41
 * @LastEditTime: 2020-09-17 18:44:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_module/UserMsgIndexTable.cpp
 */
#include "UserMsgIndexTable.hpp"

UserMsgIndexTable::UserMsgIndexTable(DbConnPtr dbConnPtr)
:dbConnPtr_(dbConnPtr)
{

}



void UserMsgIndexTable::insert(const UserMsgIndex& userMsgIndex){
    
    pqxx::work work{*dbConnPtr_};
    auto sqlStr = fmt::format("INSERT INTO \"UserMsgIndex\" VALUES ({}, {}, {}, {}, CURRENT_TIMESTAMP)",
                userMsgIndex.ownerId,userMsgIndex.otherId, 
                userMsgIndex.mId, userMsgIndex.type);
    work.exec(sqlStr);
    work.commit();
}


UserMsgIndex makeUserMsgIndexFromTableRow(const pqxx::row& row){
    UserMsgIndex userMsgIndex;
    userMsgIndex.ownerId = row["owner_id"].as<uint64_t>();
    userMsgIndex.otherId = row["other_id"].as<uint64_t>();
    userMsgIndex.mId = row["mid"].as<uint64_t>();
    userMsgIndex.type = row["type"].as<bool>();
    userMsgIndex.createTime = row["create_time"].as<std::string>();
    return userMsgIndex;
}
