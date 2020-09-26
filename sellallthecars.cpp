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
    ll m = 1000000007;
    while(t--) {
        long int n;
        cin >> n;
        vector <ll> p(n);
        for (long int i = 0; i < n; i++) {
            cin >> p.at(i);
        }

        sort(p.begin(), p.end());
        ll sum = 0;
        for (long int i = n - 1; i >= 0; i--) {
            if (p.at(i) - (n - (i + 1)) > 0)
                //cout << "i " << i << endl;
                //cout << "(n - (i + 1))  " << (n - (i + 1)) << endl;
                sum += p.at(i) - (n - (i + 1));
                //cout << "s " << sum << endl; 
    }

    cout << sum % m<< endl;

    }
    return 0;
}