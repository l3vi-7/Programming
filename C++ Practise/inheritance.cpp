#include<iostream>
using namespace std;

class Account {
    private:
        string name;
        double balance;
    public:
        Account();
        Account(string name, double balance);
        ~Account();
};

Account :: Account() : Account {"Unknown", 0.0} {cout << "No arg Account Constructor called" << endl;}
Account :: Account(string name, double balance) : name {name}, balance {balance} {cout << "Ovrloaded Account Constructor called" << endl;}
Account :: ~Account() {cout << "Account Destructor called" << endl;}

class Savings_Account : public Account {
    private:
        double int_rate;
    public:
        Savings_Account();
        Savings_Account(double int_rate);
        ~Savings_Account();
        
};

Savings_Account :: Savings_Account() : Savings_Account {1.0} {cout << "Savings Account Constructor called" << endl;}
Savings_Account :: Savings_Account(double int_rate) : Account{}, int_rate {int_rate} {cout << "Savings Account Overloaded Constructor called" << endl;}
Savings_Account :: ~Savings_Account() {cout << "Savings Account Destructor called" << endl;}


int main() {

    Account a, b{"XXX", 1000};

    Savings_Account c, d{2.0};
    

    return 0;
}