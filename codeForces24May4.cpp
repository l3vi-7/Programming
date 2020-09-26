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
        ll n, k;
        cin >> n >> k;
        if (k >= n) {
            cout << 1 << endl;
        } else {
            ll prime = -1, nn = n;
            while (nn % 2 == 0) {
                prime = 2;
                nn /= 2;
            }

            for (int i = 3; i * i <= nn; i += 2) {
                while (nn % i == 0) {
                    prime = i;
                    nn /= i;
                }
            }
            
            
            if (prime == -1) {
                cout << n << endl;
            } else {
                cout << (ll) (n / prime) << endl;
            }
        }
        
    }
    return 0;
}