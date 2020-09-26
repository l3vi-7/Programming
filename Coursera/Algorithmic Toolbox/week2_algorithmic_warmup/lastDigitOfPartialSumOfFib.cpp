#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll n, m;
    cin >> m >> n;
    m = m%60;
    n = n% 60;
    if (n < m) {
        n += 60;
    }
    //cout << m << endl;
    //cout << n << endl;
    vector <ll> fn (n + 3);
    fn[0] = 0;
    fn[1] = 1;
    int sum = 0;
    for (int i = 2; i <= n + 2; i++) {
        fn[i] = (fn[i - 1] % 10 + fn[i - 2] % 10) % 10;
    }
    
    for (int i = m; i <= n; i++) {
        sum += fn[i] % 10;
    }

    cout << sum % 10 << endl;
    
    return 0;
}