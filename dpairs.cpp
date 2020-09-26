#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll n, m;
    cin >> n >> m;
    vector <ll> v(n), u(m);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    
    for (ll i = 0; i < m; i++) 
        cin >> u[i];

    ll maxS = n + m - 1;
    map <ll, pair<ll, ll>> mp;
    for (int i = 0; i < n && maxS > 0; i++) {
        for (int j = 0; j < m && maxS > 0; j++) {
            ll sum = v[i] + u[j];
            if (mp.find(sum) == mp.end()) {
                mp[sum].first = i;
                mp[sum].second = j;
                maxS--;
            }   
        }
    }

    for (auto i : mp) {
        cout << i.second.first << " " << i.second.second << endl;
    }


    return 0;
}