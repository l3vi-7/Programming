#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int edit_distance(string s1, string s2) {
    int n = s1.size(), m = s2.size();
    vector <vector <int>> edit (n + 1, vector <int> (m + 1, 0));
    for (int i = 0; i <= n; i++) {
        edit[i][0] = i; 
    }
    for (int j = 0; j <= m; j++) {
        edit[0][j] = j;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int ed = 0;
            if (s1[i - 1] != s2[j - 1])
                ed = 1;
            /*if (i == 2 && j == 4) {
                cout << edit[i - 1][j] << " " << edit[i][j - 1] << " " << edit[i - 1][j - 1] <<endl;
            }*/
            edit[i][j] = min(min(edit[i - 1][j] + 1, edit[i][j - 1] + 1), edit[i - 1][j - 1] + ed);
        }
    }

    /*for (auto i : edit) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }*/
    return edit[n][m];
}


int main()
{
    IOS;
    string a, b;
    cin >> a >> b;
    cout << edit_distance(a, b) <<endl;
    return 0;
}