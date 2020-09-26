#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int a0 = 0, a1;
    vector <int> v;
    v.push_back(a0);
    for (int i = 1; v[v.size() - 1] <= z; i++) {
        if (i % 2 == 0) {
            v.push_back(a0 - y);
            a0 = a0 - y;
        } else {
            v.push_back(a0 + x);
            a0 = a0 + x;
        }
    }
    /*
    for (auto i : v) {
        cout << i << " ";
    }*/
    vector <int>:: iterator in;
    in = find(v.begin(), v.end(), z);
    if (in == v.end())
        cout << -1 << endl;
    else 
        cout << in - v.begin() << endl;

    return 0;
}