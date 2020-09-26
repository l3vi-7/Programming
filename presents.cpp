#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n;
    cin>>n;
    vector <int> presents(n + 1), result(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> presents[i];
    }
    for (int i = 1; i <= n; i++) {
        result[presents[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}