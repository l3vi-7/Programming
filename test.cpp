#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    for (int i = 0; i < 10; i++) {
        cout << "===============================" << endl;
        cout << rand() % 10 << " " << rand() % 10 << " " << rand() % 10 << endl;
        cout << endl;
        cout << rand() % 10 << " " << rand() % 10 << " " << rand() % 10 << endl;
        cout << "===============================" << endl;
    }

    return 0;
}