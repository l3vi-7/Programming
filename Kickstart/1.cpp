#include<bits/stdc++.h>
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
    for (int z = 1; z <= t; z++) {
        ll n;
        cin >> n;
        vector <ll> days(n);

        for (ll i = 0; i < n; i++)
            cin >> days[i];

        ll max = INT_MIN;
        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            if (days[i] > max) {
                max = days[i];
                if (i == n - 1 || max > days[i + 1]) {
                    ans += 1;
                }
            }
        }

        cout << "Case #" << z << ": " << ans << endl;
    }
    return 0;
}