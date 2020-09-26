#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 100;
    int *p1, *p2 = & a;

    p1 = p2;

    *p1 += 1;

    cout << a << endl;
    cout << *p2 <<endl;
    cout << *p1 << endl;

    return 0;
}

