#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int jose (int n, int k) {
    if (n == 1)
        return n;
    return (jose(n - 1, k) + (k - 1)) % n + 1;
}

int main()
{
    IOS;
    cout << jose(7, 3) << endl;
    cout << jose(8,2) << endl;
    return 0;
}