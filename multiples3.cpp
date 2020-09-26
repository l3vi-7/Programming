#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int


int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--) {
        ll k;
        int d0, d1;
        cin >> k >> d0 >> d1;
        ll cyc = (2 * (d0 + d1)) % 10 +  
                 (4 * (d0 + d1)) % 10 +  
                 (8 * (d0 + d1)) % 10 +  
                 (6 * (d0 + d1)) % 10; 

        int r = (k - 3) % 4;

        int rem;

        if ( r == 0)
            rem = 0;
        if (r == 1)
            rem = (2 * (d0 + d1)) % 10;
        if (r == 2)
            rem = (2 * (d0 + d1)) % 10 + (4 * (d0 + d1)) % 10;
        if (r == 3)
            rem = (2 * (d0 + d1)) % 10 + (4 * (d0 + d1)) % 10 + (8 * (d0 + d1)) % 10;
        
        ll sum = d0 + d1 + ((d0 + d1) % 10) + ((k - 3) / 4) * cyc + rem;

        if (sum % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}