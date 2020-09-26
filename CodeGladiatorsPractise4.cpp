#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string s;
    while(t--) {
        int n;
        cin >> n;
        vector <char> v;
        set <char> s1;
        while(n--) {
            cin >> s;
            cout << s[0];
            v.push_back(s[0]);
            s1.insert(s[0]);
        }
        cout << endl;

        int k;
        for (auto i: s1) {
            if (count(v.begin(), v.end(), i) == 1) {
                cout << "I am Alone " << i << endl;
            }
        }
    }
    return 0;
}