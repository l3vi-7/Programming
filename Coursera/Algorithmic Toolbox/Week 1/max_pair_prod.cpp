#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main () {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cout << a[n - 1] * a[n - 2] << endl;

    return 0;
}