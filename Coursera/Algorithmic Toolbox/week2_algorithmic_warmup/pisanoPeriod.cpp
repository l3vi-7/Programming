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
    vector <ll> v;
    v.push_back(0);
    v.push_back(1);
    int len;
    for (int i = 2; i <= n; i++) {
        ll fn = (v[i - 1] + v[i - 2]) % m;
        v.push_back(fn);
        int s = v.size() -1;
        if (s >3 && (v[s] == 1 && v[s - 1] == 1 && v[s-2] == 0)) {
            len = s - 2;
            break;
        }

    }

    /*for (auto i : v) {
        cout << i << endl;
    }*/

    cout << len << endl;

    //ll rem = n % len;

    //cout << v[rem] % m << endl;

    return 0;
}