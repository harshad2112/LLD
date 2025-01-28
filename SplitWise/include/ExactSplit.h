#ifndef EXACT_SPLIT_H
#define EXACT_SPLIT_H

#include "Split.h"

class ExactSplit : public Split
{
public:
    ExactSplit(vector<User*> users, double amount, map<User *, double> splits);
    map<User *, double> get_split();
};

#endif