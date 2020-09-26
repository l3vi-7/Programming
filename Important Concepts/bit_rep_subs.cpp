#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    for (int b = 0; b < (1 << n); b++) {
        vector <int> v;
        for (int i = 0; i < n; i++) {
            //cout << "b " << b << " i " << i << " 1 << i "  << (1 << i) << endl;
            if (b & (1 << i))
                v.push_back(i);
        }

        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}