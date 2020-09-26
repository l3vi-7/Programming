#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll d, m, n;
    cin >> d >> m >> n;
    vector <ll> v (n + 2);
    for (ll i = 1; i <= n; i++) {
         cin >> v[i];
    }
    v[n+1] = d;
    ll count  = 0, currRefill = 0;
    while (currRefill < n + 1) {
        ll lastRefill = currRefill;
        while (currRefill < n + 1 && v[currRefill + 1] - v[lastRefill] <= m)
            currRefill++;
        
        if (currRefill == lastRefill) {
            count = -1;
            break;
        }
        if (currRefill < n + 1)
            count++;
    }

    cout << count << endl;

    return 0;
}