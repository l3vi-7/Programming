#include<iostream>
using namespace std;

class A {
    static int objCount;
    public:

        A() {
            cout << "Object Created" << endl;
            objCount += 1;
        }

        ~A() {
            cout << "Object Destroyed" << endl;
            objCount -= 1;
        }

        static int getnumObjects() {
            return objCount;
        }

};

int A::objCount;

void activeObjects() {
    cout << "Current no. of objects are" << A::getnumObjects() << endl;
}


int main() {

    A a;
    activeObjects();
    A b;
activeObjects();
    {
        A c;
activeObjects();
    }
activeObjects();
    A *d = new A();
activeObjects();
    return 0;
}