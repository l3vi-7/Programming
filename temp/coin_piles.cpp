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
        //cout << 1<< endl;
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int sum = 0, i = 0;
        for (i = 0; i < n; i++) {
            int temp = 0;
            if (v[n - 1] - v[i] > k) {
                if (v[n - 1] - v[i] - k > v[i])
                    temp = v[i];
                else 
                    temp = v[n - 1] - v[i] - k;
            }
            sum += temp;
        }

        //cout << i << endl;
        cout << sum << endl;
        
    }
    return 0;
}