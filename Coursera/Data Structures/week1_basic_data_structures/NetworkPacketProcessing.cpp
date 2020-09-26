#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll s, n;
    cin >> s >> n;
    queue <pair<ll, ll>> q;
    ll time = 0;
    for (ll i = 0; i < n; i++) {
        ll a,p, at;
        cin >> a >> p;
        if (q.size() < s) {
            //cout << a << " " << p << endl;
            if (a == 0 && p == 0) {
                cout << 0 << endl;
            } else {
                q.push({a, p});
            at = a;
            }
        } else {
                //cout << q.front().first << " " << q.front().second << endl;
                if (q.front().first == -1) {
                    cout << -1 << endl;
                    q.pop();
                } else {
                    cout << max(time, q.front().first) << endl;
                    time = max(time, q.front().first) + q.front().second;
                    q.pop();
                }
                if (a < time) {
                    q.push ({-1, 0});
                } else {
                    q.push({a,p});
                    at = a;
                }
            }
    }

    while (!q.empty()) {
        if (q.front().first == -1) {
                    cout << -1 << endl;
                    q.pop();
        } else {
            cout << max(time, q.front().first) << endl;
            time = max(time, q.front().first) + q.front().second;
            q.pop();
        }
    }

    return 0;
}