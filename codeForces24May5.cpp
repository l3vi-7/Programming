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
        ll n;   
        cin >> n;
        vector <vector <int>> initial (n, vector <int> (n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> initial[i][j];
            }
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if ( initial[i][j] == 1) {
                        if (initial[i + 1][j] != 1 && initial[i][j + 1] != 1){
                            flag = false;
                            break;
                        }
                }
            }
            if (!flag)
                break;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}