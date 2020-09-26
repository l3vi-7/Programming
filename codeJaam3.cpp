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
        int n;
        cin >> n;
        vector <pair<pair<int,int>, int>> v;
        vector <char> ch (n);
        for (int i = 0; i < n; i++) {
            int s, e;
            cin >> s >> e;
            v.push_back({{s, e}, i});
        }
        bool flag = true;
        sort(v.begin(), v.end());
        pair <int, int> c = {0, 0}, j = {0, 0};
        for (auto i : v) {
            if (i.first.first < c.second && i.first.first < j.second) {
                flag = false;
                break;
            }
            if (i.first.first >= c.second) {
                ch[i.second] = 'C';
                c = i.first;
            } else if (i.first.first >= j.second) {
                ch[i.second] = 'J';
                j = i.first;
            }
        }
        cout << "Case #" << z + 1 << ": ";
        if (flag == false)
                cout << "IMPOSSIBLE" <<endl;
            else {
                for (int i = 0; i < n; i++) 
                    cout << ch[i];
            }
            cout << endl;
        /*
        cout << endl;
        for (auto i : v) {
            cout << "s " << i.first.first << " e " << i.first.second << " i " << i.second << endl;
        }
        cout <<endl;
        */
    }
    return 0;
}