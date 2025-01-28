#include "../include/Expense.h"

int Expense::idCounter = 0;

Expense::Expense(User *paidBy, vector<User *> users, Split *split, string description)
{
    this->paidBy = paidBy;
    this->users = users;
    this->split = split;
    this->description = description;
    id = ++idCounter;
}

Split *Expense::getSplit()
{
    return split;
}

User *Expense::getPaidBy()
{
    return paidBy;
}