#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int  maxGold (int n, int W, vector <int> weights) {
    int val;
    vector <vector <int>> value (n + 1, vector <int> (W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            value[i][w] = value[i - 1][w];
            val = 0;
            if (w >= weights[i - 1]) {
                val = value[i - 1][w - weights[i - 1]] + weights[i - 1];
            }
            if (val > value[i][w])
                value[i][w] = val;
        }
    }
    
    return value[n][W];
}


int main()
{
    IOS;
    int W, n;
    cin >> W >> n;
    vector <int> weights(n);

    for (int i = 0; i < n; i++)
        cin >> weights[i];

    cout << maxGold (n, W, weights) << endl;
    return 0;
}