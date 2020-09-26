#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll n;
    cin >> n;
    vector <int> nums(n), c;
    for (ll i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (auto i : nums) {
        while (i > 0) {
            c.push_back(i % 10);
            i /= 10;
        }
    }

    sort(c.begin(), c.end());

    string s = "";
    for (int i = c.size() - 1; i >= 0; i--) {
        s += to_string(c[i]);
    }

    cout << endl;

    return 0;
}