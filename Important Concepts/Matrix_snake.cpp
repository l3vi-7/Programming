#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int



int main()
{
    IOS;
    vector <vector<int>> mat {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i % 2 == 0) {
                cout << mat[i][j] << " ";
            } else {
                cout << mat[i][3 - j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}