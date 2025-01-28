#include "../include/ExactSplit.h"

ExactSplit::ExactSplit(vector<User*> users, double amount, map<User *, double> splits) : Split(users, amount)
{
    double totalAmount = 0;
    for (auto split : splits)
    {
        totalAmount += split.second;
    }
    if (totalAmount != amount)
    {
        throw("Split amount does not match total amount");
    }
    this->splits = splits;
};

map<User *, double> ExactSplit::get_split()
{
    return splits;
}