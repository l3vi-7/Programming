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
    int z = t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (ll i = 0; i < n;i++) cin >> v[i];

        ll curr_diff = v[1] - v[0];
        ll curr_len = 2, max_len = 2;
        
        for (ll i = 2; i < n; i++) {
            if (v[i] - v[i - 1] == curr_diff) {
                curr_len += 1;
            } else {
                curr_diff = v[i] - v[i - 1];
                curr_len = 2;
            }
            //cout << curr_len << endl;
            max_len = max(curr_len, max_len);
        }

        cout << "Case #" << z - t << ": " << max_len << endl;
    }
    return 0;
}