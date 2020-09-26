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
        vector<int> s(n), p(n), v(n), k(n);

        for (int i = 0; i < n; i++) {
            cin >> s[i] >> p[i] >>v[i];
            s[i] += 1;
        }
        int maxprofit = INT_MIN;
        for (int i = 0; i < n; i++) {
                k[i] = p[i] / s[i];
                v[i] *= k[i];
                if (v[i] > maxprofit)
                    maxprofit = v[i];
        }

        cout << maxprofit << endl;

    }


    return 0;
}