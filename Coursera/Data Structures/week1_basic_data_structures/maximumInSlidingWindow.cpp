#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n,m;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int m;
    cin >> m;
    int max_ele = INT_MIN;
    queue <int> q;

    for (int i = 0; i < n; i++) {
        if (q.size() < m) {
            q.push(v[i]);
            if (v[i] > max_ele)
                max_ele = v[i];
        } else {
            if (q)
        }
    }


    return 0;
}