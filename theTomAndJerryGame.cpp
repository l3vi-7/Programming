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
        ll ts,js, ks, ls = 1;
        cin >> ts;
        ks = ts;
        ll no_of_2s = 0;
        while (ts % 2 == 0) {
            ts /= 2;
            ls *= 2;
            no_of_2s += 1;
        }
        ls *= 2;
        js = ks / ls;
        cout << js << endl;
        

    }
    return 0;
}