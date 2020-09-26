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
       int act, rank, sev;
       cin >> act;
       string org;
       cin >> org;
       ll laddus = 0;
       while (act--) {
           string acti;
           cin >> acti;
           if (acti == "CONTEST_WON") {
               cin >> rank;
               if (rank >= 20)
                    laddus += 300;
               else
                    laddus += 300 + (20 - rank);
           } else if (acti == "TOP_CONTRIBUTOR")
                laddus += 300;
            else if (acti == "BUG_FOUND") {
                cin >> sev;
                laddus += sev;
            } else {
                laddus += 50;
            }
       }
       if (org == "INDIAN")
                cout << laddus / 200 << endl;
       else 
            cout << laddus / 400 << endl;

    }

    return 0;
}