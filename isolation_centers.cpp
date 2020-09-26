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
    while (t--) {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        map <char, ll> mp;
        for (auto i : s) {
            mp[i] += 1;
        }
        while (q--) {
            ll pendingQueue = 0;
            ll c;
            cin >> c;
            for (auto i : mp) {
                if (i.second - c > 0)
                    pendingQueue += (i.second - c);
            }

            cout << pendingQueue << endl;
        }
    }

    return 0;
}