#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int factor (ll n, ll k) {
    if (n <= 1)
            cout << 0 << endl;
        if (n == 2 or n == 3) {
            if (k == 1) {
                return 1;
            } else {
                return 0;
            }
        } 
    ll freq = 0;
        while (n % 2 == 0) {
            freq++;
            n = n / 2;
        }
        for (int i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                freq++;
                n = n / i;
            }
        }
    //cout << freq << endl;

    if (freq >= k) 
        return 1;
    else 
        return 0;
}

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        cout << factor(x, k) << endl;
    }

    return 0;
}