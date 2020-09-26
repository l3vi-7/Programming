#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int change(int amount, vector <int> v) {
    vector <int> min_change(amount + 1, INT_MAX);
    min_change[0] = 0;
    for (int i = 1; i <= amount; i++) {
        for (auto x : v) {
            if (i - x >= 0)
                min_change[i] = min(min_change[i], min_change[i - x] + 1);
        }
    }
    return min_change[amount];
}


int main()
{
    IOS;
    int amount;
    cin >> amount;
    vector <int> v {1, 3, 4};
    cout << change(amount, v) <<endl;
    return 0;
}