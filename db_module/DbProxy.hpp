/*
 * @Author: your name
 * @Date: 2020-06-09 12:30:25
 * @LastEditTime: 2020-09-17 20:19:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SimpleImServer/database/DatabaseService.hpp
 */ 
#ifndef DATABASE_SERVICE_HPP
#define DATABASE_SERVICE_HPP


#include "../project.hpp"
#include "UserTable.hpp"
#include "UserRelationTable.hpp"

class DbProxy{
public:
    DbProxy();
    DbConnPtr dbConnPtr();
    
private:
    DbConnPtr dbConnPtr_;
};



#endif