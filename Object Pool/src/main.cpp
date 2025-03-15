#include <iostream>

#include "Object.hpp"
#include "ObjectPool.hpp"

int main()
{
    ObjectPool *objPool = ObjectPool::getInstance();
    std::shared_ptr<Object> obj1 = objPool->getObject();
    std::shared_ptr<Object> obj2 = objPool->getObject();
    std::shared_ptr<Object> obj3 = objPool->getObject();
    std::shared_ptr<Object> obj4 = objPool->getObject();
    obj3->setA(3243);
    std::cout<<obj3->getA()<<std::endl;


}
