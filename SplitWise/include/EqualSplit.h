#ifndef EQUAl_SPLIT_H
#define EQUAl_SPLIT_H

#include "Split.h"

class EqualSplit : public Split
{
public:
    EqualSplit(vector<User*> users, double amount);
    map<User *, double> get_split();
};

#endif