#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int long_common_subseq3 (int p, vector <int> s1, int q, vector <int> s2, int r, vector <int> s3) {
    vector<vector<vector <int>>> lcs (p + 1, vector<vector<int>> (q + 1, vector <int> (r + 1, 0)));
    for (int i = 0; i <= p; i++) {
        lcs[i][0][0] = 0; 
    }
    for (int j = 0; j <= q; j++) {
        lcs[0][j][0] = 0;
    }
    for (int k = 0; k <= r; k++) {
        lcs[0][0][k] = 0;
    }
    for (int i = 1; i <= p; i++) {
        for (int j = 1; j <= q; j++) {
            for (int k = 1; k <= r; k++) {
                if (s1[i - 1] == s2[j - 1] && s1[i - 1]== s3[k - 1])
                    lcs[i][j][k] = 1 + lcs[i - 1][j - 1][k - 1];
                else {
                    lcs[i][j][k] = max(lcs[i - 1][j][k], lcs[i][j - 1][k]);
                    lcs[i][j][k] = max(lcs[i][j][k], lcs[i][j][k -1]);
                    lcs[i][j][k] = max(lcs[i][j][k], lcs[i - 1][j - 1][k]);
                    lcs[i][j][k] = max(lcs[i][j][k], lcs[i][j - 1][k - 1]);
                    lcs[i][j][k] = max(lcs[i][j][k], lcs[i - 1][j][k -1]);
                }
            }
        }
    }

    return lcs[p][q][r];
}


int main()
{
    IOS;
    int p, q, r;
    cin >> p;
    vector <int> a (p);
    for (int i = 0; i < p; i++) cin >> a[i];
    cin >> q;
    vector <int> b (q);
    for (int i = 0; i < q; i++) cin >> b[i];
    cin >> r;
    vector <int> c (r);
    for (int i = 0; i < r; i++) cin >> c[i];
    cout << long_common_subseq3(p, a, q, b, r, c) <<endl;
    return 0;
}