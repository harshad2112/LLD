#ifndef EXPENSE_H
#define EXPENSE_H

#include <vector>
#include <string>

#include "Split.h"
#include "User.h"

using namespace std;

class Expense
{
private:
    static int idCounter;
    int id;
    double amount;
    vector<User *> users;
    string description;
    User *paidBy;
    Split *split;

public:
    Expense(User *paidBy, vector<User *> users, Split *split, string description = "");
    Split *getSplit();
    User* getPaidBy();
};

#endif