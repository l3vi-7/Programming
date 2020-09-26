#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int binarySearch (vector <int> &v, int key, int l, int r) {
    if (l <= r) {
        int mid = l + (r-l)/2;
        if (v[mid] == key)
            return mid;
        if (key > v[mid])
            return binarySearch(v, key, mid+1, r);
        
        return binarySearch(v, key, l, mid-1);
    }
    return -1;
}

int main()
{
    IOS;
    int n, m;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    unordered_map <int,int> lookup;
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        if (lookup.find(k) == lookup.end())
            lookup[k] = binarySearch(a, k, 0, n - 1);
        cout << lookup[k] << " ";
    }
    cout << endl;
    return 0;
}