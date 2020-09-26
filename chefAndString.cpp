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
        string s;
        cin >> s;
        ll n = s.length();
        if (n == 1)
            cout << 0 << endl;
        else {
            ll i = 0, j = 1, npairs = 0;
            while (i < n && j < n) {
                if (s[i] != s[j]) {
                    npairs += 1;
                    i += 2;
                    j += 2;
                } else {
                    i += 1;
                    j += 1;
                }
            }

            cout << npairs << endl;
        }
    }
    return 0;
}