#include "../include/EqualSplit.h"

EqualSplit::EqualSplit(vector<User *> users, double amount) : Split(users, amount) {};

map<User *, double> EqualSplit::get_split()
{
    int totalUsers = users.size();
    double amountPerUser = amount / totalUsers;
    for (auto user : users)
    {
        splits[user] = amountPerUser;
    }
    return splits;
}