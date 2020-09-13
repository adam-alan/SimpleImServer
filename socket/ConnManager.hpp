/*
 * @Author: your name
 * @Date: 2020-07-03 19:18:19
 * @LastEditTime: 2020-07-07 13:16:25
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

    void add(uint64_t userId, ConnPtr connPtr);
    void remove(uint64_t userId);
    void remove(ConnPtr connPtr);
    void connection(uint64_t userId);
   
    uint64_t userId(ConnPtr connPtr);
    ConnPtr connectionId(uint64_t userId);

private:
    ConcurrentMap<uint64_t, ConnPtr> mUserIdToConn;
    ConcurrentMap<ConnPtr, uint64_t> mConnToUserId;
    
};



#endif // CONNECTION_MANAGER
