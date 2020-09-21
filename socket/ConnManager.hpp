/*
 * @Author: your name
 * @Date: 2020-07-03 19:18:19
 * @LastEditTime: 2020-09-17 00:25:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * 
 * @FilePath: /SimpleImServer/socket/ConnectionManager.hpp
 */ 
#if !defined(CONNECTION_MANAGER)
#define CONNECTION_MANAGER

#include <mutex>
#include <unordered_map>
#include "Connection.hpp"


class ConnManager{
public:
    ConnManager();
    ~ConnManager();

    void add(uint64_t userId, ConnPtr connPtr);
    void remove(uint64_t userId);
    void remove(ConnPtr connPtr);
    uint64_t getUserIdByConn(ConnPtr connPtr);
    ConnPtr getConnByUserId(uint64_t userId);

private:
    Map<uint64_t, ConnPtr> userIdToConn_;
    Map<ConnPtr, uint64_t> connToUserId_;
    
};



#endif // CONNECTION_MANAGER
