#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll n;
    cin >> n;
    n = n% 60;
    //cout << m << endl;
    //cout << n << endl;
    vector <ll> fn (n + 3);
    fn[0] = 0;
    fn[1] = 1;
    int sum = 1;
    for (int i = 2; i <= n; i++) {
        fn[i] = ((fn[i - 1] + fn[i - 2])) % 10;
        sum += (fn[i]* fn[i]) % 10;
    }
    if (n != 0)
        cout << sum % 10 << endl;
    else
    {
            cout << 0 << endl;
    }
    
    
    return 0;
}