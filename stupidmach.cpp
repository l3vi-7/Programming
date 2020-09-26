//Python SOlution
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
        ll n;
        cin >> n;
        vector <ll> s (n);
        REP(i, 0, n) {
            cin >> s[i];
        }
        map <int, int> mp;
        REP(i, 0, n) {
            auto it = mp.find(s[i]);
            if (it == mp.end())
                mp[s[i]] = i;
        }

        for (auto i: mp) {
            cout << i.first << " " << i.second << endl;
        }

    }


    return 0;
}