#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(ll i = a; i < b; i++)

int main()
{
    IOS;
    ll n, w;
    cin >> n >> w;
    vector <pair<long double,long double>> v (n);
    for (ll i = 0; i < n; i++) {
        long double k, l;
        cin >> k >> l;
        v[i] = {k / l, l};
    }
    long double max_val = 0;
    sort(v.begin(), v.end());

    for (ll i = n - 1; i >= 0 && w >= 0; i--) {
        if (v[i].second <= w) {
            w -= v[i].second;
            max_val += (v[i].second * v[i].first);
        } else {
            max_val += (v[i].first * w);
            w = 0;
        }
    }
    cout << std::fixed;
    cout << setprecision(4) << max_val << endl;

    return 0;
}