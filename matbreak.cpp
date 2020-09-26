#include<bits/stdc++.h>
using namespace std;

#define m 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

ll power(ll x, ll y, ll p) 
{ 
    ll res = 1; 

    x = x % p;  
  
    while (y > 0) { 
        if (y & 1) 
            res = (res * x) % p; 

        y = y >> 1; 
        x = (x * x) % p; 
    } 
    return res; 
} 

int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--) {
        ll n, a;
        cin >> n >> a;
        ll c = 0, p = 1, sum = 0, k = 2, kk = 0;
        for (int i = 1; i < (n + 1); i++) {
            if (i == 1)
                p = 1;
            else if (i == 2)
                p = 2 * (i + c);
            else {
                kk = (p + k) % m;
                p = (kk * (i + c) % m);
                k = kk;
            }
            c += 1;
            //cout << " p " << p << endl;
            //cout << sum << endl;
            //cout << a % m << endl;
            //cout << p % m << endl;
            ll kkk = (power(a % m, p % m, m)) % m;
            //cout << kkk << endl;
            sum = (sum + kkk) % m;
        }
        cout << sum << endl;
    }
    

    return 0;
}