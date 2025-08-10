#include<bits/stdc++.h>
#define nl "\n"
using namespace std;

class Account
{
protected:
    string name;
    double balance;
public:
    Account(string name, double balance)
    {
        this->name = name;
        this->balance = balance;
    }

    void showAccount()
    {
        cout << "Holder: " << name << nl;
        cout << "Balance: " << balance << nl;
    }

    virtual void calcInterest() = 0;
};

class Savings : public Account
{
public:
    Savings(string name, double balance) : Account(name, balance) {}

    void calcInterest()
    {
        cout << "Interest earned: " << balance * 0.04 << nl;
    }
};

class FixedDeposit : public Account
{
public:
    FixedDeposit(string name, double balance) : Account(name, balance) {}

    void calcInterest()
    {
        cout << "Interest earned: " << balance * 0.06 << nl;
    }
};

int main()
{
    Savings savingsAccount("NUR", 1000.3);
    savingsAccount.showAccount();
    savingsAccount.calcInterest();
    FixedDeposit fdAccount("ALI", 5000);
    fdAccount.showAccount();
    fdAccount.calcInterest();

    return 0;
}