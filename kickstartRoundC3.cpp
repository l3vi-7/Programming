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
    for (ll z = 1; z <= t; z++) {
        ll n, k, count = 0;
        cin >> n >> k;
        vector <int> times(n);
        for (int i = 0; i < n; i++) cin >> times[i];

        int start = 0, end = k - 1;
        for (int i = 0; end < n; i++) {
            bool flag = true;
            start = i;
            end = i + k - 1;
            //cout << times[start] << " " << times[end] <<endl;
            if (times[start] == k && times[end] == 1) {
                //cout << "debug" << endl;
                for (int j = start + 1; j <= end; j++) {
                    if (times[j] >= times[j - 1]){
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    count += 1;
            }
  
        }
        

        cout << "Case #" << z << ": " << count <<endl;
    }

    return 0;
}