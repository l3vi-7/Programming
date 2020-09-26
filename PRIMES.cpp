#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

void seives (ll n) {
    int primes[101] = {0};

    for (ll i = 2; i*i <= n; i++) {
        if (primes[i] == 0) {
        for (ll j = i * i; j <= n; j += i)
            primes[j] = 1; 
        }
    }

    for (ll i = 1; i <= n; i++) {
        if (primes[i] == 0)
            cout << i << " ";
    }

}

int main()
{
    IOS
    int t;

    seives(100);

    return 0;
}