#ifndef SPLIT_H
#define SPLIT_H

#include <vector>

#include "User.h"

using namespace std;

class Split
{
protected:
    vector<User *> users;
    double amount;
    Split(vector<User*> users, double amount = 0);
    map<User *, double> splits;

public:
    virtual map<User *, double> get_split() = 0;
};

#endif