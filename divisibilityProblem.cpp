#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << endl;
        else {
            long long int rem = a % b;
            cout << (b - rem) << endl;
        } 
    }

    return 0;
}