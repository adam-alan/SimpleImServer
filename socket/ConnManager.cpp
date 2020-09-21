/*
 * @Author: your name
 * @Date: 2020-09-16 21:37:25
 * @LastEditTime: 2020-09-17 00:26:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/ConnManager.cpp
 */
#include "ConnManager.hpp"

ConnManager::ConnManager()
:userIdToConn_(),
connToUserId_(){

}

ConnManager::~ConnManager(){
    
}

void ConnManager::add(uint64_t userId, ConnPtr connPtr){
    this->userIdToConn_[userId] = connPtr;
    this->connToUserId_[connPtr] = userId;
}


void ConnManager::remove(uint64_t userId){
    auto connPtr = userIdToConn_[userId];    
    userIdToConn_.erase(userId);
    connToUserId_.erase(connPtr);
}


void ConnManager::remove(ConnPtr connPtr){
    auto userId = connToUserId_[connPtr];
    userIdToConn_.erase(userId);
    connToUserId_.erase(connPtr);
}

uint64_t ConnManager::getUserIdByConn(ConnPtr connPtr){
    auto found = connToUserId_.find(connPtr);
    if (found == connToUserId_.end()) {
        return UINT64_MAX;
    }
    return found->second;
}

ConnPtr ConnManager::getConnByUserId(uint64_t userId){
    auto found = userIdToConn_.find(userId);
    if (found == userIdToConn_.end()){
        return nullptr;
    }
    return found->second;
}
