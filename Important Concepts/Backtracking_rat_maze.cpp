#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

bool isSafe (int i, int j, int n, vector <vector <int>> mat) {
    if (i < 0 || i >= n)
        return false;
    if (j < 0 || j >= n)
        return false;
    if (mat[i][j] == 0)
        return false;

    return true;
}

void solve(int i, int j, int n, vector <vector <int>> &mat, vector <vector <int>> &path) {
    cout << i << " " << j << endl;
    if (i == n  && j == n)
        return;
    if (!isSafe(i,j,n,mat)) {
        return;
    }
    
    path[i][j] = 1;
    solve(i + 1, j, n, mat, path);
    if (!path[n - 1][n - 1])
        solve(i, j + 1, n, mat, path);
    //path[i][j] = 0;

}

int main()
{
    IOS;
    int n;
    cin >> n;
    vector <vector <int>> mat(n, vector <int> (n)), path(n, vector <int> (n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    }

    solve(0, 0, n, mat, path);

    for (auto i : path) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    if (path[n - 1][n - 1])
        cout << "Path Exists" << endl;
    else
    {
        cout << "No Path" << endl;
    }
    

    
    return 0;
}