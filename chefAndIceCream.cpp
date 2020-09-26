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
        int count5 = 0, count10 = 0, count15 = 0;
        bool flag = true;
        vector <int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        for (int i = 0; i < n; i++) {
            int k = v[i];
            if (k == 5) {
                count5 += 1;
            } else if (k == 10) {
                if (count5 > 0) {
                    count5 -= 1;
                    count10 += 1;
                } else {
                    flag = false;
                    break;
                }
            } else {
                if (count10 > 0) {
                    count15 += 1;
                    count10 -= 1;
                } else if (count5 > 1) {
                    count15 += 1;
                    count5 -= 2;
                } else {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}