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
    for (int z = 1; z <= t; z++) {
        ll k;
        cin >> k;

        vector <ll> notes(k), log(4, -1);
        for (ll i = 0; i < k; i++) cin >> notes[i];
        ll ans = 0, prev;
        ll inc = 0, dec = 0;
        prev = notes[0];
        for (ll i = 1; i < k; i++) {
            if (notes[i] < prev) {
                dec += 1;
                inc = 0;
                prev = notes[i];
            } else if (notes[i] > prev) {
                inc += 1;
                dec = 0;
                prev = notes[i];
            } else {
                continue;
            }
            if (dec == 4 || inc == 4) {
                    ans += 1;
                    inc = 0;
                    dec = 0;
                }
        }
        
        cout << "Case #" << z << ": " << ans << endl;
    }
    return 0;
}