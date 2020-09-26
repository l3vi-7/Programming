#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int maxFreq (vector <int> L, vector <int> R , int n) {
    vector <int> a (1000, 0);
    for (int i = 0; i < n; i++) {
        a[L[i]] += 1;
        a[R[i] + 1] -= 1; 
    }

    int maxF = a[0], ans = 0;
    for (int i = 1; i < 1000; i++) {
        a[i] += a[i - 1];
        if (maxF < a[i]) {
            maxF = a[i];
            ans = i;
        }
    }

    return ans;
}

int main()
{
    IOS;
    vector <int> L {1,2,3}, R {3,5,7};
    cout << maxFreq (L, R, 3) << endl;
    return 0;
}