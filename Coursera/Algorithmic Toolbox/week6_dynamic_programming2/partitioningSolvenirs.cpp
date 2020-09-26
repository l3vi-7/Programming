#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int partitoningSum(vector <int> weights, int n, int W) {
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
    int n;
    cin >> n;
    vector <int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    if (n < 3 || sum % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    sum /= 3;

    int exp =  partitoningSum(v, n, sum);
    if (sum != exp)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    return 0;
}