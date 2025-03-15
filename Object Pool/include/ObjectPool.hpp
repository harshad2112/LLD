#ifndef OBJECT_POOL_H
#define OBJECT_POOL_H

#include <queue>
#include <memory>

#include "Object.hpp"

class ObjectPool
{
    std::queue<std::shared_ptr<Object>> pool;
    static int MAX_POOL_SIZE;
    static ObjectPool *instance;
    ObjectPool();
    ObjectPool(const ObjectPool&) = delete;
    ObjectPool& operator=(const ObjectPool&) = delete;
public:
    static ObjectPool* getInstance();
    std::shared_ptr<Object> getObject();
    void releaseObject(std::shared_ptr<Object> obj);
};

#endif
