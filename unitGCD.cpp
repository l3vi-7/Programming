#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    IOS
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        if ( n < 3) {
            cout << 1 << endl << n;
            for ( int i = 1; i <= n; i++) 
                cout << " " << i;
            cout << endl;
            continue;
        }
        cout << n / 2 << endl;
        for (ll i = 1; i <= n / 2; i++) {
            if (i == 1)
                cout << "3 1 2 3" << endl;
            else if (i == n / 2) {
                if (n % 2 == 0)
                    cout << 1 << " " << (2 * i) << endl;
                else
                    cout << 2 << " " << (2 * i) << " " << (2 * i + 1) << endl;
            } else 
                cout << 2 << " " << (2 * i) << " " << (2 * i + 1) << endl;
        }
    }
    return 0;
}