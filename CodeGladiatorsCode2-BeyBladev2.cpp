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

        long long int best = fav.size() - 1, worst = 0;
        for (long int i = n - 1; i >= 0; i--) {
            if (fav[best] > opp[i]) {
                count++;
                best--;
            } else {
                worst++;
            }
        }

        cout << count << endl;
    }
    return 0;
}