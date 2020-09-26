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
        ll n;
        cin >> n;
        map <ll, ll> mp;
        vector <pair <ll, ll>> v;
        for (ll i = 0; i < n; i++) {
            ll l;
            cin >> l;
            mp[l] += 1;
        }
        ll k;
        cin >> k;

        for (auto i: mp) {
            v.push_back ({i.second, i.first});
        }

        sort(v.begin(), v.end());

        for (auto i = v.rbegin(); i != v.rend(); i++) {
            if (k == 0)
                break;
            if (i->first != 0){
            cout << i->second << " ";
            k -= 1;}
        }
        cout << endl;
    }
    return 0;
}