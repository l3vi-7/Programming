#include <iostream>
using namespace std;

class A {
    public:
        int data;
        int *ptr;
        A() : data (0), ptr (&data) {}
        A(int data) : data (data), ptr (&(this->data)) {cout << " Overloaded cons called " << endl;}
        A(const A &obj) : A() {
            this -> data = obj.data;
            *(this -> ptr) = *(obj.ptr);
            cout << "Copy Constructor" << endl;
        }

};

int main() {
    A a(10);
    A b (a);
    *(b.ptr) = 100;
    cout << a.data << endl;
    cout << b.data << endl;
    return 0;
}