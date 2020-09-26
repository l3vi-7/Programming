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
    vector <vector<int>> mat {{10, 20, 30}, {15,25,80}, {35, 90, 100}};
    printMatrix(mat);
    for (int i = 0; i < mat[0].size(); i++)
        cout << mat[0][i] << " ";
    for (int i = 1; i < mat.size(); i++)
        cout << mat[i][mat[0].size() - 1] << " ";
    for (int i = mat[0].size() - 2; i >= 0; i--)
        cout << mat[mat.size() - 1][i] << " ";
    for (int i = mat.size() - 2; i >= 1; i--) 
        cout << mat[i][0] << " ";
    cout << endl;
    return 0;
}