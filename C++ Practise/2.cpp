#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int  maxProfit (int n, int W, vector <int> weights, vector <int> profits) {
    vector <vector <int>> value (n + 1, vector <int> (W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (w >= weights[i - 1]) {
                value[i][w] = max(value[i - 1][w - weights[i - 1]] + profits[i - 1], value[i - 1][w]);
            } else 
                value[i][w] = value[i - 1][w];
        }
    }
    
    return value[n][W];
}


int main()
{
    int W, n;
    cout << "Enter total weight and Number of items: "<< endl;
    cin >> W >> n;
    vector <int> weights (n), profits (n);
    cout <<"Enter the weights: ";
    for (int i = 0; i < n; i++)
        cin >> weights[i];
    cout <<"Enter the profits: ";
    for (int i = 0; i < n; i++)
        cin >> profits[i];

    cout << "The maximum profit is: " << maxProfit (n, W, weights, profits) << endl;
    return 0;
}