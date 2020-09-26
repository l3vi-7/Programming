#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int majorityElement (vector <ll> v, ll n) {
    ll count = 1;
    ll candidate = v[0];
    for (int i = 1; i < n; i++) {
        if (candidate == v[i])
            count += 1;
        else {
            count -= 1;
            if (count == 0) {
                candidate = v[i];
                count = 1;
            }
        }
    }

    return candidate;
}

bool isMajority (vector<ll> &v, ll n, ll maj_Candidate) {
    ll count = 0;
    for (auto i : v) {
        if (i == maj_Candidate)
            count += 1;
    }
    return count > (int) n/2;
}

int main()
{
    IOS;
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll maj_candidate = majorityElement(v, n);

    cout << isMajority(v, n, maj_candidate) << endl;
    

    return 0;
}