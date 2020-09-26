#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

void search(ll n, vector <vector <ll>> &M, vector <bool>  &row,vector <bool> diag1 ,vector <bool> diag2, ll col, vector <vector<ll>> &count) {
    if (col == n) {
        //count += 1;
        vector <ll> k;
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                    if (M[i][j] == 1)
                        k.push_back(j + 1);
            }
        }
        count.push_back(k);
    }
    for (ll i = 0; i < n; i++) {
        if (M[i][col] == 0 && !row[i] && !diag1[i + col] && !diag2[i - col + n - 1]) {
            //cout << "debug" << endl;
            M[i][col] = 1;
            row[i] = true;
            diag1[i + col] = true;
            diag2[i - col + n - 1] = true;
            search (n, M, row,diag1, diag2, col + 1, count);
            M[i][col] = 0;
            row[i] = false;
            diag1[i + col] = false;
            diag2[i - col + n - 1] = false;
        }
    }
}


int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--) {
        ll N;
        cin >> N;
        if (N == 1){
            cout << "[1 ]" << endl;
            continue;
        }
        vector <vector <ll>> M (N, vector <ll> (N, 0));
        vector <bool> row(N, false), diag1((2*(N-1)), false), diag2((2*(N-1)), false);
        
        vector <vector <ll>> count;
        search(N, M, row, diag1, diag2, 0, count);

        if (count.size() == 0)
            cout << -1 << endl;
        else {
            cout << count.size() << endl;
            sort(count.begin(), count.end());
            for (auto i : count) {
                cout << "[";
                for (ll j = 0; j < i.size(); j++)
                    cout << i[j] << " ";
                cout << "] ";
            }
            //cout << endl;
        }

    }
    
    return 0;
}