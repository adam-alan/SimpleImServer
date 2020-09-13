/*
 * @Author: your name
 * @Date: 2020-06-10 15:22:29
 * @LastEditTime: 2020-09-13 22:11:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/socket/Connection.hpp
 */ 
#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include <unordered_map>
#include <functional>
#include <queue>



class Connection;

using ConnPtr = std::shared_ptr<Connection>;

class Connection:public std::enable_shared_from_this<Connection>{
public:
    using Handle = std::function<void(ConnPtr)>;

    Connection(IoService & ioService,Socket && socket);
    void start();
    
    StreamBufferPtr readBufferPtr();
    void addHandle(String messageName, Handle handle);
    void addMessage(StreamBufferPtr streamBufferPtr);
private:
    void read();
    void write();
    void wait();
    void forceClose();

    Map<String, Handle> handlers;
    StreamBufferPtr mReadBuffer;
    std::queue<StreamBufferPtr> mSendQueue;
    Socket mSocket;
    Timer timer;
    int16_t clickNum;
};



#endif