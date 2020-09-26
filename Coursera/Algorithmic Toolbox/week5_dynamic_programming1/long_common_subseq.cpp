#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int long_common_subseq (int n, vector <int> s1, int m, vector <int> s2) {
    vector <vector <int>> lcs (n + 1, vector <int> (m + 1, 0));
    for (int i = 0; i <= n; i++) {
        lcs[i][0] = 0; 
    }
    for (int j = 0; j <= m; j++) {
        lcs[0][j] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1])
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else 
                lcs[i][j] =max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }

    return lcs[n][m];
}


int main()
{
    IOS;
    int n, m;
    cin >> n;
    vector <int> a (n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector <int> b (m);
    for (int i = 0; i < m; i++) cin >> b[i];
    cout << long_common_subseq(n, a, m, b) <<endl;
    return 0;
}