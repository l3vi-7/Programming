#include<iostream>
using namespace std;

class Account {
    public:
    virtual void withdraw (double amount);
    virtual ~Account() {
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
    virtual void withdraw (double amount) {
        cout << "Trust : withdrawal" << endl;
    }
    
    virtual ~Trust() {
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

    Account* p1 = new Account();
    Account* p2 = new Savings_Account();
    Account* p3 = new Trust();
    Account* p4 = new Bond();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout << endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;


    return 0;
}

