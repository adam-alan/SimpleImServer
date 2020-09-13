#if !defined(USER_RELATION_HPP)
#define USER_RELATION_HPP

#include <string>

struct UserRelation{
    uint64_t id;
    uint64_t userId;
    uint64_t friendId;
    std::string createTime;
    std::string updateTime;


    friend std::ostream &operator<<(std::ostream & out,const UserRelation & userRelation);
    friend std::istream &operator>>(std::istream & in,UserRelation & userRelation);
};




#endif // USER_RELATION_HPP
