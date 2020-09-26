#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> initial(n), prev, pattern(n), curr(n);
        for (int i = 0; i < n; i++) {
            cin >> pattern[i];
            pattern[i] -= 1;
            curr[i] = i;
            initial[i] = i;
        }
        prev = curr;
        
        int time = 0;
        do {
            for (int i = 0; i < n; i++) {
                curr[pattern[i]] = prev[i];
            }
            time += 1;
            prev = curr;
        } while (initial != curr);

        cout << time << endl;


    }
    return 0;
}