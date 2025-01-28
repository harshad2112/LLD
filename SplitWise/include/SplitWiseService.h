#ifndef SPLIT_WISE_SERVICE_H
#define SPLIT_WISE_SERVICE_H

#include "../include/Expense.h"
#include "../include/User.h"

class SplitWise
{
private:
    static SplitWise *instance;
    map<int, User *> user;
    SplitWise();
    void updateBalance(Expense *expense);

public:
    static SplitWise* getInstance();
    SplitWise(const SplitWise *) = delete;
    SplitWise &operator=(const SplitWise *) = delete;
    void addUser(User *user);
    void addExpense(Expense *expense);
};

#endif
