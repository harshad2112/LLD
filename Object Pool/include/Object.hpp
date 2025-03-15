#ifndef OBJECT_H
#define OBJECT_H

class Object{
    int a;
    int b;
public:
    Object(){};
    Object(int a, int b): a(a), b(b) {}
    void setA(int _a);
    void setB(int _b);
    int getA();
    int getB();
};

#endif
