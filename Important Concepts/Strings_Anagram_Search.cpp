#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int digitSum (int n, int sum = 0) {
    if (n == 0)
        return sum;
    return digitSum(n / 10, sum + (n % 10));
}

int main()
{
    IOS;
    string s, t;
    cin >> s >> t;
    vector <int> count (26, 0), mp (26, 0);
    for (int i = 0; i < s.size(); i++) {
        count[s[i] - 'a'] += 1;
    }

    int window_size = 0;
    for (int i = 0; i < t.size(); i++) {
        if (window_size < s.size()) {
            mp[t[i] - 'a'] += 1;
            window_size += 1;
        }
        if (window_size == s.size()) {
            if (count == mp) {
                cout << "Found" << endl;
                return 0;
            }
            mp[t[i - window_size + 1] - 'a'] -= 1;
            window_size -= 1;
        }
    }

    cout << "Not Found" << endl;

    return 0;
}