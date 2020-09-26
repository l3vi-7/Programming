#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--) {
        vector <int> p(3), a(3), diff(3);
        for (int i = 0; i < 3;i++)
            cin >> a[i];
        for (int i = 0; i < 3;i++)
            cin >> p[i];
        set <int> s;
        for (int i = 0; i < 3;i++){
            s.insert(p[i] - a[i]);
            diff[i] = p[i] - a[i];
        }
        s.erase(0);
        for (auto i : s)
            cout << i << " ";
            cout << endl;
        if (s.size() == 1)
            cout << 1 << endl;
        else if (s.size() == 2) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}