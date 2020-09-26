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
        int a, b;
        cin >> a >> b;
        if (a == 1 && b != 1 || a != 1 && b == 1) {
            int k = max(a, b);
            cout << k * k << endl;
            continue;
        }

        int k = 2 * min(a, b);
        cout << k * k << endl;
    }
    return 0;
}