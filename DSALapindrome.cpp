#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin >> t;
	while (t--) {
	    string s;
	    cin >> s;
	    string s1, s2;
	    int mid = s.size()/ 2;
        if (s.size() % 2 == 0) {
            s1 = s.substr(0, mid);
	        s2 = s.substr(mid);
        } else {
            s1 = s.substr(0, mid);
	        s2 = s.substr(mid + 1);
        }

        map <char, int> k1, k2;
        for (int i = 0; i < s1.size(); i++) {
            k1[s1[i]] += 1;
            k2[s2[i]] += 1;
        }

        for (auto i : k1) {
            cout << i.first << " " << i.second << endl;
        }

        cout << endl;

        for (auto i : k2) {
            cout << i.first << " " << i.second << endl;
        }

        if ( k1 == k2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
	}
	return 0;
}