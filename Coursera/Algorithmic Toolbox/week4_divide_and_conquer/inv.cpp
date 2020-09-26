#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)



ll mergeVecs(vector <ll> &v, ll l, ll r, ll mid) {
    //cout << "debug 5" <<endl;
    //ll i = l, j = mid + 1;
    ll inversions = 0;
    vector <ll> L, R;
    for (ll i = l; i < mid + 1; i++) {
        L.push_back(v[i]);
    }

    for (ll i = mid + 1; i < r + 1; i++) {
        R.push_back(v[i]);
    }

    ll i = 0, j = 0;
    ll k = l;
    while (i < L.size() && j < R.size()) {
        if (L[i] <= R[j]){
            v[k] = L[i];
            i++;
            k++;
        } else {
            inversions += (L.size() - i);
            v[k] = R[j];
            j++;
            k++;
        }
    }

    while (i < L.size()) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < R.size()) {
        v[k] = R[j];
        j++;
        k++;
    }

    return inversions;
}

ll mergeSort(vector <ll> &v, ll l, ll r) {
    //cout << "debug 1" <<endl;
    ll inv = 0;
    if (l < r) {
        //cout << "debug 2" <<endl;
        ll mid = l + (r - l) / 2;
        inv += mergeSort(v, l, mid);
        //cout << "debug 3" <<endl;
        inv += mergeSort(v, mid + 1, r);
        //cout << "debug 4" <<endl;
        inv += mergeVecs(v, l, r, mid);
    }
    return inv;
}

int main()
{
    IOS;
    ll n;
    cin >> n;
    vector <ll> v (n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll inv = mergeSort(v, 0, v.size() - 1);
    cout << inv <<endl;
    return 0;
}