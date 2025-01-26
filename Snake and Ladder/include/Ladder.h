#ifndef LADDER_H
#define LADDER_H

class Ladder
{
private:
    int startPoint;
    int endPoint;

public:
    Ladder(int startPoint, int endPoint) : startPoint(startPoint), endPoint(endPoint) {};
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