#include<iostream>
using namespace std;

int main() {
    int *i = NULL;
    int &p = *i;

    cout << p << endl;
    cout << "P works fine" << endl;

    return 0;
}