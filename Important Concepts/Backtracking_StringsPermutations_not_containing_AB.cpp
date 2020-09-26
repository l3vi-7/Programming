#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

bool isSafe(string s, int l, int r, int i) {
    if (l != 0 && s[l - 1] == 'A' && s[i] == 'B')
        return false;
    if (l + 1== r && s[l] == 'B' && s[i] == 'A')
        return false;
    return true;
}

void permutations(string s, int l, int r) {
    if (l == r)
        cout << s << endl;
    else {
        for (int i = l; i <= r; i++) {
            if (isSafe(s, l, r, i)) {
                swap(s[l], s[i]);
                permutations(s, l+1, r);
                swap(s[l], s[i]);
            }
        }
    }
}

int main()
{
    IOS;

    string s;
    cin >> s;
    permutations(s, 0, s.size() - 1);

    return 0;
}