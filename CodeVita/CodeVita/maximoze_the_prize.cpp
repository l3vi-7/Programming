#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main() {
    ll n;
    ll sum=0;
    cin >> n;
    vector <ll> vec(n);
    for(int i = 0;i < n; i++) {
        cin >> vec[i];
    } 
    if(n < 3) {
        if(n == 0)
            sum = 0;
        else if(n == 1)
            sum = vec[0]; 
        else {
            sum = sum + (vec[0]*vec[1]);
            vec[0] = vec[1];
            sum = sum + vec[0];
        }
    } else { 
        for(int i = 1; i < n - 1; i = i) {
            sum = sum + ((vec[n-2]*vec[n-1])+vec[n-3]);
            vec[n-2] = vec[n-1];
            n--;
        }
        sum = sum + (vec[0]*vec[1]);
        vec[0] = vec[1];
        sum = sum + vec[0];
        }
    cout << sum;
    return 0;
}
