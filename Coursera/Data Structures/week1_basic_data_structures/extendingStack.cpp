#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n;
    cin >> n;
    stack <pair<int, int>> stk;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "push") {
            int k;
            cin >>  k;
            if (stk.empty()) {
                stk.push({k, k});
            } else {
                if (k > stk.top().second){
                    stk.push({k, k});
                } else {
                    int ma = stk.top().second;
                    stk.push({k, ma});
                }
            }
        } else if (s == "pop") {
            stk.pop();
        } else if (s == "max")
            cout << stk.top().second << endl;
    }
    return 0;
}