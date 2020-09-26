#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n;
    cin >> n;
    vector < pair<ll, ll> > v (n);
    for (int i = 0; i < n; i++) {
        ll k, l;
        cin >> k >> l;
        v[i].first = l;
        v[i].second = k;
    }

    sort(v.begin(), v.end());

    ll p = v[0].first;
    vector <ll> pts;
    pts.push_back(p);

    for (int i = 1; i < n; i++) {
        if (p > v[i].first || p < v[i].second){
            p = v[i].first;
            pts.push_back(p);
        }
    }

    cout << pts.size() << endl;
    for (auto i : pts) {
        cout << i << " " ;
    }
    cout << endl;

    return 0;
}