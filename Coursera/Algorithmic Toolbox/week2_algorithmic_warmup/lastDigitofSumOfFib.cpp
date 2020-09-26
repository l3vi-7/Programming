#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll n;
    cin >> n;
    ll a = 0, b = 1, fn = 0;
    n = n % 60;
    //cout << n << endl;
    for (int i = 2; i <= n+2; i++) {
        fn = (a % 10 + b % 10) % 10;
        a = b;
        b = fn;
        //cout << " a " << a << " b " << b << endl;
    }
    if (fn == 0) {
        fn = 9;
    } else {
        fn -= 1;
    }
    cout << fn << endl;
    //cout <<sum % 10 << endl;

    return 0;
}