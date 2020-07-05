#ifndef SINGLETON_HPP
#define SINGLETON_HPP

template<typename T>
auto & instance(){
    static T obj;
    return obj;
}



#endif