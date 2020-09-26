#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll n;
    cin >> n;
    string brides, grooms;
    cin >> brides >> grooms;

    int bm = 0, br = 0, gm = 0, gr = 0;

    for (int i = 0; i < n; i++) {
        if (brides[i] == 'r')
            br += 1;
        else
        {
            bm += 1;
        }
        //cout << grooms[i] << endl;
        if (grooms[i] == 'r')
            gr += 1;
        else
        {
            gm += 1;
        }  
    }
    //cout << bm << " " << br << " " << gm << " " << gr << endl; 
    
    if (bm == gm) {
        cout << 0;
    } else {
        for (int i = 0; i < n; i++) {
            if (brides[i] == 'r') {
                gr -= 1;
            } else {
                gm -= 1;
            }
            ll k = n - i;
            if (gm < 0 || gr < 0) {
                cout << k;
                break;
            }
        }
    }

    return 0;
}