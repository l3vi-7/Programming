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
    while(t--) {
        int n;
        cin >> n;
        vector <int> v;
        for (int i = 1; i < n+1; i++) {
            int k;
            cin >> k;
            if (k == 1)
                v.push_back(i);
        }
        if (v.size() == 1) {
            cout << "YES" << endl;
            continue;
        }
        int flag = true;
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i + 1] - v[i] < 6) {
                flag = false;
                break;
            }
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        

    }
    return 0;
}