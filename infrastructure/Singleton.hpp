#ifndef SINGLETON_HPP
#define SINGLETON_HPP

template<typename T>
class Singleton{
public:
    Singleton() = delete;
    Singleton(const Singleton & obj) = delete;
    ~Singleton() = delete;
    static T & getInstance(){
        static T instance;
        return instance;
    }
};



#endif