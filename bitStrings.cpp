#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll n, k = 1;
    cin >> n;
    ll m = 1000000007;
    while (n--) {
        k = (k * 2) % m;
        if (k < 0)
            k = (k + m) % m;
    }
    cout << k << endl;
    return 0;
}