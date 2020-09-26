#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    IOS;
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector <int> pos;
    for (int i = 0; i < t.size(); i++) {
        int j = 0, k = i;
        while (j < n) {
            if (s[j] == t[k]) {
                k += 1;
                j += 1;
            } else 
                break;
        }
        if (j == n)
            pos.push_back(i);
        else if (j != 0)
            i += j - 1;
    }
    for (auto i : pos)
        cout << i << " ";
    cout << endl;
    if (pos.size() == 0)
        cout << "Not Found" << endl;

    return 0;
}