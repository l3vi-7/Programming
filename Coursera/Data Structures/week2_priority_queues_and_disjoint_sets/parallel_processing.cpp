#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

// struct cmp {
//     bool operator() (pair <ll, ll> const &a, pair <ll, ll> const &b) {
//         if (a.first < b.first)
//             return true;
//         else if (a.first == b.first) {
//             if (a.second < b.second)
//                 return true;
//         }
//         return false;
//     }
// };


int main() {
    ll n, m;
    cin >> n >> m;
    ll count = 0;
    vector <ll> times(m), assigned(m), start_time(m);
    //priority_queue <pair<ll, ll>, vector <pair<ll, ll>> ,cmp> threads;
    priority_queue <pair<ll, ll>, vector<pair<ll, ll>>, greater <pair <ll, ll>>> threads;
    for (ll i = 0; i < m; i++) {
        cin >> times[i];
    }

    for (ll i = 0; i < n; i++)
        threads.push({0, i});

    for (ll i = 0; i < m; i++) {
        pair <ll, ll> curr = threads.top();
        threads.pop();
        assigned[i] = curr.second;
        //cout << curr.first << " " << curr.second << endl;
        start_time[i] = curr.first;
        curr.first += times[i];
        //cout << " i " << i << " " << " curr " <<  curr.first << times[i] << endl;
        threads.push(curr);
    }

    for (ll i = 0; i < m; i++) {
        cout << assigned[i] << " " << start_time[i] << endl;
    }
    
    
    
    return 0;
}