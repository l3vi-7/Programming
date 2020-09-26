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
        ll n;
        cin >> n;
        ll sum_q = 0;
        while(n >= 1) {
            n = n / 5;
            sum_q += n;
        }

        cout << sum_q << endl;
    }

    
    return 0;
}