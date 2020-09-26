#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll t;
    cin >> t;
    for (ll z = 1; z <= t; z++) {
        ll n, count = 0;
        vector <ll> v(n + 1);
        ll sum = 0;
        for (ll i = 1; i <= n; i++) {
            ll k;
            cin >> k;
            sum += k;
            v[i] = sum;
        }

        for (ll i = 1; i <= n; i++) {
            int sum_query = 0;
            for (ll j = i; j <= n; j++) {
                sum_query += v[j] - v[i - 1];
                int ps = pow(sum_query, 0.5);
                if (ps == pow(sum_query, 0.5))
                    count += 1;
            }
        }

    }

    cout << "Case #" << t << ": ";
    return 0;
}