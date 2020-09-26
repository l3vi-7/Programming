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
    vector <vector<int>> mat {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    printMatrix(mat);
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    printMatrix(mat);
    return 0;
}