#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

void printMatrix (vector <vector<int>> mat) {
    cout << endl;
    for (auto i : mat) {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
}

int main()
{
    IOS;
    vector <vector<int>> mat {{10, 20, 30, 40, 50}, {15,25,80, 90, 100}, {35, 90, 100, 110, 120}};
    printMatrix(mat);
    int n = mat.size(), m = mat[0].size();
    for (int r = n, c = m; r > 0 && c > 0; r -= 2, c -= 2) {
        int i = n - r, j = m - c;
        for (int k = j; k < c; k++)
            cout << mat[i][k] << " ";
        for (int k = i + 1; k < r; k++)
            cout << mat[i][j + c] << " ";
        for (int k = j + c - 1; k >= 0; k--)
            cout << mat[i + r][k] << " ";
        for (int k = i + r - 1; k >= i; k--) 
            cout << mat[k][j] << " ";
    }
    
    cout << endl;
    return 0;
}