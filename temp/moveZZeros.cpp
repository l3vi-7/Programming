#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    IOS
    int t;
    cin >> t;
    for (int z = 1; z <= t; z++) {
        string s;
        cin >> s;
        ll x = 1, y = 1, k = 1;
        vector<int>v;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'N')
            {
                if ((y - k) > 0)
                y = y - k;
            else{
                ll diff = y - k;
                y = 1e9 + diff;}
                }
        else if (s[i] == 'S'){
            if (y + k <= 1e9)
                y = y + k;
            else
                y = abs(k + y - 1e9);
                }
        else if  (s[i] == 'W') {
            if (x - k > 0)
                x = x-k;
            else{
                ll diff = x - k;
                x = 1e9 + diff;
                }}
        else if  (s[i] == 'E') {
            if (x + k <= 1e9)
                x = x + k;
            else
                x = abs(k + x - 1e9);
                }
        else {
            if (s[i] == '(')
                continue;
            else if (s[i] == ')'){
                if (v.size() > 0) {
                    //cout << " k " << k << endl;
                    //cout << " v back  " << v.back() << endl;
                    k /= v.back();
                    v.pop_back();
                }}
            else{
                v.push_back((int)s[i] - 48);
                //cout << " k " << k << endl;
                //cout << "s " << s[i] << endl;
                k *= ((int)s[i] - 48);
                //cout << " k " << k << endl;
                }
                }
        }

        cout << "Case #" << z << ": " << x << " " << y << endl;
    }

    

    return 0;
}