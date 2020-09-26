#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    string patt, text;
    cin >> patt >> text;
    ll hash_pat = 0;
    ll n = patt.size();
    for (int i = 0; i < patt.size(); i++) {
        hash_pat += int(patt[i] - 'a' + 1);
    }
    ll hash_text = 0;

    for (int i = 0; i < text.size() - n + 1; i++) {
        //cout << i << endl;
        if (i == 0) {
            for (int i = 0; i < n; i++) {
                hash_text += int(text[i] - 'a' + 1);
            }
        } else {
            hash_text -= int(text[i - 1] - 'a' + 1);
            hash_text += int(text[i + n - 1] - 'a' + 1);
        }
        if (hash_pat == hash_text) {
            bool flag = true;
            for (int j = 0, k = i; j < n && k < i + n; j++, k++) {
                if (patt[j] != text[k]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << i << " ";
            }
        }
    }
    cout << endl;

    return 0;
}