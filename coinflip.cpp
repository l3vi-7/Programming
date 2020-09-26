#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int


int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--) {
        ll g, n;
        int l, q;
        cin >> g;
        while (g--) {
            cin >> l;
            cin >> n;
            cin >> q;
            if (n % 2 == 0) {
                    cout << n / 2 << endl;
            } else {
                if (l == 1) {
                    if (q == 1)
                        cout << (n / 2) << endl;
                    else 
                        cout << (n / 2) + 1 << endl;
                } else {
                    if (q == 1)
                        cout << (n / 2) + 1 << endl;
                    else 
                        cout << (n / 2) << endl;
                }
            }
        }
    }

    
    return 0;
}