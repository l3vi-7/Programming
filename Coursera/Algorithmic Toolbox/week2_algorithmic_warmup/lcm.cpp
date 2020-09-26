#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int gcd (ll a, ll b) {
    ll m, n;
    m = max(a, b);
    n = min (a, b);
    if (m % n == 0)
        return n;
    else {
        return gcd(n, m%n);
    }
}
int main()
{
    IOS;
    ll a, b;
    cin >> a >> b;
    ll lcm = a*b / gcd(a, b);
    cout << lcm << endl;

    return 0;
}