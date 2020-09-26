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
        int n;
        cin >> n;
        vector <int> v (n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int min_diff = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            min_diff = min(min_diff,abs(v[i + 1] - v[i]));
        }
        cout << min_diff << endl;
    }
    return 0;
}