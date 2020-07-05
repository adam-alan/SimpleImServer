#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include <unordered_map>
#include <functional>
#include <queue>
#include "../infrastructure/project.hpp"


using namespace boost;

class Connection:public std::enable_shared_from_this<Connection>{
public:

    Connection(Socket && socket);
    void start();
    
    StreamBufferPtr readBufferPtr();
    void addHandle(std::string name, std::function<void(std::shared_ptr<Connection>)> handle);
    void addHandle(std::string messageName);
    void addMessage(StreamBufferPtr streamBufferPtr);
    //void forceClose();
private:
    void read();
    void write();
    // void timerHandle(ErrorCode errorCode);
    
    std::unordered_map<std::string, std::function<void(std::shared_ptr<Connection>)>> handlers;

    StreamBufferPtr mReadBuffer;
    std::queue<StreamBufferPtr> mSendQueue;
    Socket mSocket;
};



#endif