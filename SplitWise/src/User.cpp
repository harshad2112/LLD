#include "../include/User.h"

int User::idCounter = 0;

User::User(string name, string email)
{
    this->name = name;
    this->email = email;
    id = ++idCounter;
}

void User::setBalance(User *paidBy, double amount)
{
    balance[paidBy->getId()] += amount;
}

int User::getId()
{
    return id;
};

double User::getBalanceByUser(User *user)
{
    return balance[user->id];
}

map<int, double> User::getBalance()
{
    return balance;
}

string User::getName()
{
    return name;
}