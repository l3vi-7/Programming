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
        ll n, q;
        cin >> n >> q;
        vector <ll> v ( 2*q + 1);
        for (ll i = 1; i < (2*q) + 1; i++) {
            cin >> v[i];
        }
        ll count = 0;

        //cout << endl;
        /*for (auto i : v)
            cout << i << " ";
        cout << endl;*/
        for (int i = 0; i < (2*q); i++) {
            count += abs(v[i+1] - v[i]);
            //cout << count << endl;
        }

        cout << count << endl;
    }

    return 0;
}