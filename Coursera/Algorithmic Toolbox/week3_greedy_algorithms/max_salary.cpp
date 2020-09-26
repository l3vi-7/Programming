#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

bool compare_sort (int a, int b) {
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s1s2 = s1 + s2;
    string s2s1 = s2 + s1;
    if (s1s2 > s2s1)
        return true;
    else
        return false;
}

int main()
{
    IOS;
    ll n;
    cin >> n;
    vector <int> nums(n);
    for (ll i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), compare_sort);

    for (auto i : nums) {
        cout << i << endl;
    }


    return 0;
}