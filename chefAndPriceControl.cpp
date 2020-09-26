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
        int n, k;
        cin >> n >> k;
        ll total_price = 0, actual_price = 0;
        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            if (p < k)
                actual_price += p;
            else
                actual_price += k;
            total_price += p;
        }
        cout << total_price - actual_price<< endl;
    }
    return 0;
}