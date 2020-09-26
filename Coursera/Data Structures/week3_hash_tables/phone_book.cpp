#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll n;
    cin >> n;
    unordered_map <string, string> phbk;
    while (n--) {
        string q;
        cin >> q;
        string num, name;
        if (q == "add") {
            cin >> num >> name;
            phbk[num] = name;
        } else if (q == "del") {
            cin >> num;
            if (phbk.find(num) != phbk.end())
                phbk.erase(num);
        } else {
            cin >> num;
            if (phbk.find(num) != phbk.end())
                cout << phbk[num] << endl;
            else 
                cout << "not found" << endl;
        }
    }
    return 0;
}