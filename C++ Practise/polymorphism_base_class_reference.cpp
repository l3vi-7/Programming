#include<iostream>
using namespace std;

class Account {
    public:
     void withdraw (double amount);
     ~Account() {
        cout << "Account Destructor" << endl;
    }
};

void Account :: withdraw (double amount) {
        cout << "Account : withdrawal" << endl;
    }

class Savings_Account : public Account {
    public:
    virtual void withdraw (double amount) {
        cout << "Savings Account : withdrawal" << endl;
    }

    virtual ~Savings_Account() {
        cout << "Savings Account Destructor" << endl;
    }   
};

class Trust : public Account {
    public:
     void withdraw (double amount) {
        cout << "Trust : withdrawal" << endl;
    }
    
     ~Trust() {
        cout << "Trust Destructor" << endl;
    }
};

class Bond : public Account {
    public:
    virtual void withdraw (double amount) {
        cout << "Bond : withdrawal" << endl;
    }

    virtual ~Bond() {
        cout << "Bond withdrawal" << endl;
    }   
};



int main() {

    Account a;
    Account &ref = a;
    ref.withdraw(100.00);

    Trust b;
    Account &ref1 = b;
    ref1.withdraw(10);   


    return 0;
}

