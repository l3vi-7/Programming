#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector <long long int> v;
    long long int k;
    while (n--) {
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());
    long long int max_rev = 0, k1;
    for (int i = 0; i < v.size(); i++) {
        k1 = v[i] * (v.size() - i);
        if ( k1 > max_rev) 
            max_rev = k1;
    }

    cout << max_rev << endl;
    
    return 0;
}