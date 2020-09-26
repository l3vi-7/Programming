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
    unordered_map <ll, bool> squares;
    ll sq = 0;
    ll sqr = sq * sq;
    while (sqr <= 100000) {
        squares[sqr] = true;
        sq += 1;
        sqr = sq * sq;
    }
    for (ll z = 1; z <= t; z++) {
        ll n, count = 0;
        cin >> n;
        vector <ll> v(n + 1);
        ll sum = 0;
        for (ll i = 1; i <= n; i++) {
            ll k;
            cin >> k;
            sum += k;
            v[i] = sum;
        }

        /*for (auto i : v) {
            cout << i << " ";
        }
        cout << endl;*/

        for (ll i = 1; i <= n; i++) {
            ll sum_query = 0;
            for (ll j = i; j <= n; j++) {
                //cout << " v_j" << v[j] << " v_i " << v[i] << " vi - 1 " << v[i - 1] <<endl;
                sum_query = v[j] - v[i - 1];
                //cout << "sum query " << sum_query << endl;
                if (sum_query >= 0){
                if (squares[sum_query])
                    count += 1;
                }
            }
        }

        cout << "Case #" << t << ": " << count << endl;
    }

    
    return 0;
}