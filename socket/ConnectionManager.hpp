#if !defined(CONNECTION_MANAGER)
#define CONNECTION_MANAGER

#include <unordered_map>
#include "Connection.hpp"


class ConnectionManager{
public:

    void add(std::size_t userId, std::shared_ptr<Connection> connPtr);
    void remove(std::size_t userId);
    void remove(std::shared_ptr<Connection> connPtr);
    void connection(std::size_t userId);
    void userId(std::shared_ptr<Connection> connPtr);


private:
    std::unordered_map<std::size_t, std::shared_ptr<Connection>> mUserIdToConn;
    std::unordered_map<std::shared_ptr<Connection>, std::size_t> mConnToUserId;
};



#endif // CONNECTION_MANAGER
