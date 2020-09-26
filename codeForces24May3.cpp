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
        bool flag = true;
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1; i += 2) {
            if (v[i + 1] % 2 != v[i] % 2 && abs(v[i + 1] - v[i]) != 1) {
                //cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}