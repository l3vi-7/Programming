#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

bool diagonalCheck (int i, int j, vector <vector <int>> M, int n) {
    //cout << "debug diagonal" << endl;
    int k, l;
    k = i - 1;
    l = j - 1;
    while (k >= 0 && l >= 0) {
        if (M[k][l] == 1)
            return true;
        k -= 1;
        l -= 1;
    }

    k = i + 1;
    l = j + 1;
    while (k <= n - 1 && l <= n - 1) {
        if (M[k][l] == 1)
            return true;
        k += 1;
        l += 1;
    }

    k = i - 1;
    l = j + 1;
    while (k >= 0 && l <= n - 1) {
        if (M[k][l] == 1)
            return true;
        k -= 1;
        l += 1;
    }

    k = i + 1;
    l = j - 1;
    while (k <= n - 1 && l >= 0) {
        if (M[k][l] == 1)
            return true;
        k += 1;
        l -= 1;
    }

    return false;
}

void search(int n, vector <vector <int>> &M, vector <bool>  &row, int col) {
    if (col == n) {
        for (auto i : M) {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        if (M[i][col] == 0 && !row[i] && !diagonalCheck(i, col, M, n)) {
            //cout << "debug" << endl;
            M[i][col] = 1;
            row[i] = true;
            search (n, M, row, col + 1);
            M[i][col] = 0;
            row[i] = false;
        }
    }
}


int main()
{
    IOS;
    int N;
    cin >> N;
    vector <vector <int>> M (N, vector <int> (N, 0));
    vector <bool> row(N, false);
    
    search(N, M, row, 0);

    for (auto i : M) {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}