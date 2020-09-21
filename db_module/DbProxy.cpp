/*
 * @Author: loadstar
 * @Date: 2020-06-09 12:30:38
 * @LastEditTime: 2020-09-17 21:14:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/database/DatabaseService.cpp
 */ 
#include "DbProxy.hpp"


DbProxy::DbProxy()
:dbConnPtr_(std::make_shared<DbConn>("dbname = SimpleIm user=postgres hostaddr=127.0.0.1 port=5432"))
{
    
}

DbConnPtr DbProxy::dbConnPtr(){
    return dbConnPtr_;
}
