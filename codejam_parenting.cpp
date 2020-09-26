#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    IOS
    int t;
    cin >> t;
    for (int z = 0; z < t; z++) {
        char sch[1001];
        int n;
        cin >> n;
        pair < int , pair <int, int> > c, j;
        c = {-1, {-1, -1}};
        j = {-1, {-1, -1}};
        int flag = true;
        map <int, pair<int, int>> m;
        for (int i = 0; i < n; i++) {
            int s, e;
            cin >> s >> e;
            m[s] = {i, e};
        }
        for (auto i : m) {
            if (i.first >= c.second.second) {
                sch[i.second.first] = 'C';
                c = {i.second.first, {i.first, i.second.second }};
            } else if (i.first >= j.second.second) {
                sch[i.second.first]= 'J';
                j = {i.second.first, {i.first, i.second.second }};
            } else {
                flag = false;
                break;
            }
        }
        cout << "Case #" << z + 1 <<": ";
        if (flag == true) {
            for (int i = 0; i < n; i++)
                cout << sch[i];
            cout << endl;
        }
        else 
            cout << "IMPOSSIBLE" <<endl;
    }
    return 0;
}