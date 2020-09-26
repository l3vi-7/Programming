#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

bool isEquilib (vector <int> a, int n) {
    int totalSum = 0;
    for (auto i : a)
        totalSum += i;
    
    int lSum = 0;
    for (int i = 0; i < n; i++) {
        if (lSum == totalSum - a[i])
            return true;
        lSum += a[i];
        totalSum -= a[i];
    }

    return false;
}

int main()
{
    IOS;
    cout << isEquilib({1,2,3,4,5}, 5) << endl;
    cout << isEquilib({1,2,3,1,2}, 5) << endl;
    cout << isEquilib({5, 0}, 2) << endl;
    cout << isEquilib({0, 5}, 2) << endl;

    return 0;
}