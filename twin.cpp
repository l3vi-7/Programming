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
    vector <int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    int i = n - 1;
    int sum2 = 0;
    int count = 0;
    while (sum2 <= sum) {
        sum2 += v[i];
        sum -= v[i];
        i--;
        count++;
    }

    cout << count <<endl;

    return 0;
}