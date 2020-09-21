/*
 * @Author: your name
 * @Date: 2020-09-17 18:19:51
 * @LastEditTime: 2020-09-17 22:27:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/db_module/UserMsgContentTable.cpp
 */
#include "UserMsgContentTable.hpp"

UserMsgContentTable::UserMsgContentTable(DbConnPtr dbConnPtr)
:dbConnPtr_(dbConnPtr){
    

}

uint64_t UserMsgContentTable::getMaxMsgId(){
    pqxx::work work{*dbConnPtr_};
    auto sqlStr = fmt::format("SELECT MAX(mid) FROM \"UserMsgContent\"");
    auto row = work.exec(sqlStr);
    work.commit();
    return row[0][0].as<uint64_t>();
}


void UserMsgContentTable::insert(const UserMsgContent& userMsgContent){
    pqxx::work work{*dbConnPtr_};
    auto sqlStr = fmt::format("INSERT INTO \"UserMsgContent\" VALUES(\'{}\', \'{}\', \'{}\', \'{}\', CURRENT_TIMESTAMP)",
        userMsgContent.msgId, userMsgContent.content, userMsgContent.senderId, userMsgContent.recipientId);

        
    auto row = work.exec(sqlStr);
    work.commit();
}

UserMsgContent makeUserMsgContentFromRow(const pqxx::row& row){
    UserMsgContent result;
    result.msgId = row["mid"].as<uint64_t>();
    result.senderId = row["sender_id"].as<uint64_t>();
    result.recipientId = row["recipient_id"].as<uint64_t>();
    result.content = row["content"].as<std::string>();
    result.createTime = row["create_time"].as<std::string>();
    return result;
}
