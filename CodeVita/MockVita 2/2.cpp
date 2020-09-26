#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n;
    cin >> n;
    vector <int> bitScores;

    for (int i = 0; i < n; i++) {
        int k;
        int maxD = INT_MIN, minD = INT_MAX;
        cin >> k;
        //cout << k << endl;
        while (k > 0) {
            int d = k % 10;
            k /= 10;
            maxD = max(maxD, d);
            minD = min(minD, d);
        }
        //cout << minD << " " << maxD << endl;
        int bs = 11 * maxD + 7 * minD;
        //cout << " BS " << bs << endl;
        bs = bs % 100;
        bitScores.push_back(bs / 10);
    }

    vector <int> dig (10, 0);
    
    int dPairs = 0;

    for (int i = 0; i <n; i++) {
        for (int j = i + 2; j < n; j += 2) {
            if (bitScores[i] == bitScores[j]) {
                if (dig[bitScores[i]] < 2)
                    dig[bitScores[i]] += 1;
            }
        }
    }

    for (auto i : dig)
        dPairs += i ;


    cout << dPairs;
    return 0;
}