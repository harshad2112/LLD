#include "../include/SplitWiseService.h"

SplitWise *SplitWise::instance = NULL;

SplitWise::SplitWise() {}

SplitWise *SplitWise::getInstance()
{
    if (instance == NULL)
    {
        instance = new SplitWise();
    }
    return instance;
}

void SplitWise::addExpense(Expense *expense)
{
    updateBalance(expense);
}

void SplitWise::updateBalance(Expense *expense)
{
    Split *split = expense->getSplit();
    User *paidBy = expense->getPaidBy();
    map<User *, double> perUserCost = split->get_split();
    for (auto cost : perUserCost)
    {
        cost.first->setBalance(paidBy, -cost.second);
        paidBy->setBalance(cost.first, cost.second);
    }
}

void SplitWise::addUser(User *newUser)
{
    user[newUser->getId()] = newUser;
}

