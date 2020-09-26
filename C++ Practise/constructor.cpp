#include <iostream>
#include<string>
#include<vector>
using namespace std;

class A {
    int val;
    string name;
    public:
        int *data;
        // A();
        // A(int val);
        A(int val = 0, string name = "xxx", int data = 24);
        void setVal(int val) {
            this->val = val;
        }

        // Shallow Copy Constructor 
        // A(const A &source) : val {source.val}, name {source.name}, data {source.data} {
        //     cout << "Copy Constructor called for " << source.name << " by " << this->name << endl;
        // }
        
        //Deep Copy Constructor
        // A(const A &source) : val {source.val}, name {source.name} {
        //     this->data = new int();
        //     *(this->data) = *(source.data);
        //     cout << "Deep Copy Constructor called for " << source.name << " by " << this->name << endl;
        // }

        // Move Constructor
        // A(A &&source) : val {source.val}, name {source.name}, data {source.data} {
        //     cout << "Move Constructor called for " << this->name << endl;
        //     source.data = nullptr;
        // }
        

        void setName(string name) {
            this->name = name;
        }
        int getVal() {
            return this->val;
        }
        string getName() {
            return this->name;
        }
        int getData() {
            return *data;
        }

        void display (A a) {
            cout << "------------------" << endl;
            cout << a.name << endl;
            cout << a.val << endl;
            cout << *(a.data) << endl;
            cout << "------------------" << endl;
        }

        ~A() {
            cout << "Destructor called for " << this->name << endl;
        }
};

// A::A() : A {0, "xxx"} {
//     cout << "No arg constructor" << endl;
// }

// A::A(int val) : A {val, "xxx"} {
//     cout << "One arg constructor" << endl;
// }

A::A(int val, string name, int data) : val (val), name {name} {
    cout << "Two arg constructor" << endl;
    this->data = new int;
    *(this->data) = data;
}

int main() {
    // A a;
    // cout << a.getName() << endl;;
    // cout << a.getVal() << endl;
    // cout << a.getData() << endl;
    
    // A b {10};
    // cout << b.getName() << endl;;
    // cout << b.getVal() << endl;
    // cout << b.getData() << endl;


    // A c {30, "Shravan"};
    // cout << c.getName() << endl;;
    // cout << c.getVal() << endl;
    // cout << c.getData() << endl;

    //Copy Constructor part
    // A a {100, "Shravan", 24};
    
    // a.display(a);

    // A b {a};

    // b.display(b);
    // *(b.data) = 100;

    // b.display(b);

    // a.display(a);

    //Move Constructor Part
    vector <A> vec;

    vec.push_back(A (100, "Shravan", 24));
    vec.push_back(A {110, "Sumedh", 38});
    vec.push_back(A {120, "Jugal", 45});
    
    return 0;
}