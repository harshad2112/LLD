#ifndef SNAKE_H
#define SNAKE_H

class Snake
{
private:
    int startPoint;
    int endPoint;

public:
    Snake(int startPoint, int endPoint) : startPoint(startPoint), endPoint(endPoint) {};
    int getStartPoint()
    {
        return startPoint;
    }
    int getEndPoint()
    {
        return endPoint;
    }
};

#endif