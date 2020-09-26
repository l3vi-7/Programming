#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    string s;
    cin >> s;

    string s2 = "hello";

    int i = 0, j = 0;
    while (i < s2.size() && j < s.size()) {
        if (s2[i] == s[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }

    if (i == s2.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}