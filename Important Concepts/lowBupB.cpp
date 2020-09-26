#include<bits/stdc++.h>
using namespace std;

int main() {

    vector <int> c {1,2,5,5,5,5,8,9,14,16,27,33,33,67};
    auto it = lower_bound(c.begin(), c.end(), 5);
    cout << it - c.begin() << endl;
    cout << *it << endl;
    cout << endl;

    it = lower_bound(c.begin(), c.end(), 14);
    cout << it - c.begin() << endl;
    cout << *it << endl;
    cout << endl;

    it = lower_bound(c.begin(), c.end(), 33);
    cout << it - c.begin() << endl;
    cout << *it << endl;
    cout << endl;

    it = upper_bound(c.begin(), c.end(), 5);
    cout << it - c.begin() << endl;
    cout << *it << endl;

    cout << endl;
    it = upper_bound(c.begin(), c.end(), 14);
    cout << it - c.begin() << endl;
    cout << *it << endl;

    cout << endl;
    it = upper_bound(c.begin(), c.end(), 33);
    cout << it - c.begin() << endl;
    cout << *it << endl;



    return 0;
}