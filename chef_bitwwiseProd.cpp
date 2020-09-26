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
    while (t--) {
        ll x, y, l, r;
        cin >> x >> y >> l >> r;
        ll pow_greater_l = ceil(log2(l));
        ll greater_l = pow(2, pow_greater_l);
        map <ll, ll> mp;
        ll max_ele = 0;
        if (greater_l > l)
            greater_l -= 1;
        if (greater_l > r)
            greater_l = r;
        for (int i = greater_l; i <= r; i++) {
            ll prod = (x & i) * (y & i);
            max_ele = max(max_ele, prod);
            mp[i] = prod;
        }
        cout << "greater l " << greater_l << endl;
        for (auto i : mp) {
            cout << i.first << " " << i.second << endl;
            /*if (max_ele == i.second) {
                cout << i.first << endl;
                break;
            }*/
        }
        
    }

    return 0;
}