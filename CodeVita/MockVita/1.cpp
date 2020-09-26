#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << 1 + floor(log2(n)) << endl;
    }   
    return 0;
}