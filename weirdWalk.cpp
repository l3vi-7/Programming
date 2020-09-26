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
        ll count = 0;
        ll n;
        cin >> n;
        vector <ll> A (n), B(n);
        for (ll i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> B[i];
        }
        ll walkA = 0, walkB = 0;
        for (ll i = 0; i < n; i++) {
            if (walkA == walkB && A[i] == B[i]) {
                count += A[i];
            }
            walkA += A[i];
            walkB += B[i];
        }

        cout << count << endl;
    }
    return 0;
}