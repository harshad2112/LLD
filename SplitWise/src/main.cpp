#include <iostream>

#include "../include/SplitWiseService.h"
#include "../include/EqualSplit.h"
#include "../include/ExactSplit.h"
#include "../include/Expense.h"
#include "../include/User.h"

using namespace std;

int main()
{
    SplitWise *splitwiseService = SplitWise::getInstance();
    User *user1 = new User("Harshad", "abc@xyz.com");
    User *user2 = new User("Abhay", "def@xyz.com");
    User *user3 = new User("Vivek", "ghi@xyz.com");

    Split *equalSplit = new EqualSplit({user1, user2}, 100);
    Expense *expense = new Expense(user1, {user1, user2}, equalSplit);

    splitwiseService->addUser(user1);
    splitwiseService->addUser(user2);
    splitwiseService->addUser(user3);
    splitwiseService->addExpense(expense);
    
    cout << user1->getName() << " owes: " << user1->getBalanceByUser(user2) << "$ to: " << user2->getName();
}
