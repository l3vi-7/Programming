#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n;
    cin >> n;
    ll fn;
    double sqrt_5 = sqrt(5);

    fn = ((pow(1 + sqrt_5, n) - pow(1 - sqrt_5, n)) / pow(2, n)) / sqrt_5;

    cout << fn << endl;

    return 0;
}