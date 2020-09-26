#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int



int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = i*n + 1; j <= (i + 1) * n; j++)
                    cout << j << " ";
            } else {
                for (int j = (i + 1) * n; j >= i*n + 1; j--)
                    cout << j << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}