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
        int total_hrs = 0;
        for (int i = 0; i < 5; i++) {
            int k;
            cin >> k;
            total_hrs += k;
        }
        int p;
        cin >> p;
        total_hrs *= p;
        if (total_hrs > 120) {
            cout << "Yes" << endl;
        } else 
            cout << "No" << endl;

    }
    return 0;
}