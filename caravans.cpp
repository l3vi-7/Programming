#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v.at(i);
        }

        ll max_sp = v.at(0);
        ll count = 1;

        for (int i = 1; i < n; i++) {
            if (v.at(i) <= max_sp) {
                count++;
                max_sp = v.at(i);
            }
        }

        cout << count << endl;

    }
    
    return 0;
}