#ifndef USER_H
#define USER_H

#include <string>
#include <map>

using namespace std;

class User
{
private:
    static int idCounter;
    int id;
    string name;
    string email;
    map<int, double> balance;

public:
    User(string name, string email);
    int getId();
    string getName();
    string getEmail();
    void setBalance(User *paidBy, double amount);
    double getBalanceByUser(User *user);
    map<int, double> getBalance();
};

#endif