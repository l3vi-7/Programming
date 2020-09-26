#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int


int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v (n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll min_infected = INT_MAX, max_infected = 1, curr = 1;
        for (int i = 1; i < n; i++) {
            if (abs(v[i] - v[i - 1]) <=2) {
                curr++;
            } else {
                min_infected = min(min_infected, curr);
                max_infected = max(max_infected, curr);
                curr = 1;
            }
        }
        min_infected = min(min_infected, curr);
        max_infected = max(max_infected, curr);
        cout << min_infected << " " << max_infected << endl;
        
    }

    return 0;
}