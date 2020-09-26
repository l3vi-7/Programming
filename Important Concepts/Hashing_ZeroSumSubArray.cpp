#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

void printArray (vector <int> v) {
    cout << endl;
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

int main()
{
    IOS;
    int n;
    cin >> n;
    vector <int> v (n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum = 0;
    unordered_map <int, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (mp.find(sum) != mp.end()) {
            cout << "Zero Sum Subarray Found" << endl;
            return 0;
        } else {
            mp[sum] += 1;
        }
    }

    cout << "No Zero Sum Found" << endl;

    printArray (v);

    return 0;
}