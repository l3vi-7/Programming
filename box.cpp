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
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> q(n), p;
        bool flag = false;
        vector<bool> check(n + 1, false);
        for (int i = 0; i < n; i++) {
            cin >> q[i];
            check[q[i]] = true;
        }
        p.push_back(q[0]);
        //cout << p[0] << endl;
        ll count = 1;
        for (int i = 1; i < n; i++) {
            if (q[i] != q[i - 1]) {
                p.push_back(q[i]);
            } else {
                while (check[count])
                    count += 1;
                if (q[i] >= count) {
                    p.push_back(count);
                    check[count] = true;
                } else {
                    flag = true;
                }
            }
        }

        if (flag) {
            cout << -1 << endl;
        } else {
            for (auto i : p) 
                cout << i << " ";
            cout << endl;
        }


    }
    return 0;
}