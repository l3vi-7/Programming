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
        string s;
        cin >> s;
        stack <char> stk;
        ll curr = 0, maxP = 0;
        REP(i, 0, s.length()) {
            if (s[i] == '<') {
                stk.push('<');
                curr = 0;
            } else {
                if (!stk.empty() && stk.top() == '<') {
                    curr += 2;
                    stk.pop();
                }

                maxP = max(maxP, curr);
            }
        }

        cout << maxP << endl;
    }

    return 0;
}