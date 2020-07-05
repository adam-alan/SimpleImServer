#if !defined(LOGINHANDLE)
#define LOGINHANDLE

#include "../infrastructure/messages/LoginRequest.hpp"
#include "../infrastructure/messages/LoginResponce.hpp"
#include "../infrastructure/Singleton.hpp"
#include "../infrastructure/project.hpp"
#include "../database/DatabaseService.hpp"
#include "Connection.hpp"
using namespace boost;

void LoginHandle(std::shared_ptr<Connection> conn){
    LoginRequest loginRequest;
    std::istream in(conn->readBufferPtr().get());
    in >> loginRequest;

    auto& databaseService = instance<DatabaseService>();
    auto user = databaseService.queryUserByName(loginRequest.name);
    
    LoginResponce loginResponce;

    if (user.name == loginRequest.name and user.password == loginRequest.password) {
        loginResponce.isSuccess = true;
        loginResponce.user = user;
    }
    std::ostringstream osstream;
    osstream << user;
    spdlog::info("{}", osstream.str());
    auto writeBuffer = std::make_shared<StreamBuffer>();
    std::ostream out(writeBuffer.get());
    out << loginResponce.className() << " " << loginResponce;
    conn->addMessage(writeBuffer);
}



#endif // LOGINHANDLE
