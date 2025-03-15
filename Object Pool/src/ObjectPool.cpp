#include <iostream>

#include "ObjectPool.hpp"
#include "Object.hpp"

ObjectPool* ObjectPool::instance = nullptr;
int ObjectPool::MAX_POOL_SIZE = 4;

ObjectPool::ObjectPool()
{
    for(int i=0; i<MAX_POOL_SIZE; ++i)
    {
        pool.push(std::shared_ptr<Object>{new Object()});
    }
}

ObjectPool* ObjectPool::getInstance()
{
    if(instance == nullptr)
    {
        instance = new ObjectPool();
    }
    return instance;
}

std::shared_ptr<Object> ObjectPool::getObject()
{
    if(!pool.size())
    {
        std::cout<<"Object pool is empty"<<std::endl;
        return nullptr;
    }
    auto sp = pool.front();
    pool.pop();
    return sp;
}

void ObjectPool::releaseObject(std::shared_ptr<Object> obj)
{
    pool.push(obj);
    return;
}
