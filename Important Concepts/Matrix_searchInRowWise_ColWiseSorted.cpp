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
    int i = 0, j = mat[0].size();
    int key = 23;
    while (i < mat.size() && j >= 0) {
        if (mat[i][j] == key) {
            cout << i << " " << j << endl;
            return 0;
        } else if (mat[i][j] > key)
            j--;
        else
            i++;
    }
    cout << -1 << endl;
    return 0;
}