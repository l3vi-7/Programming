#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll n;
    cin >> n;
    vector <int> fn (n + 1);
    fn[0] = 0;
    fn[1] = 1;
    for (int i = 2; i <= n; i++) {
        fn[i] = (fn[i - 1] + fn[i - 2]) % 10;
    }

    cout << fn[n] << endl;

    return 0;
}