#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll n, k;
    cin >> n >> k;
    priority_queue<ll> pq;
    for (ll i = 0; i < n; i++) {
        ll curr;
        cin >> curr;
        pq.push(curr);
    }

    while (k-- && pq.top() != 0) {
        ll curr = pq.top();
        pq.pop();
        curr = floor(curr/2);
        pq.push(curr);
    }

    ll sum = 0;

    while (!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }

    cout << sum;
    
    return 0;
}