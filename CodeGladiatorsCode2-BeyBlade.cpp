#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        vector <long long int> fav, opp;
        long long int k;
        for (long int i = 0; i < n; i++) {
            cin >> k;
            fav.push_back(k);
        }
        for (long int i = 0; i < n; i++) {
            cin >> k;
            opp.push_back(k);
        }
        sort(fav.begin(), fav.end());
        sort(opp.begin(), opp.end());
        long long int count = 0;
        cout <<endl;
        for (int i : fav) {
            cout << i << " ";
        }
        cout << endl;

        for (int i : opp) {
            cout << i << " ";
        }
        //cout << endl;
        cout <<" t "<< count << endl;
    }
    
    return 0;
}