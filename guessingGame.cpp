#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll n;
    cin >> n;
    ll l = 1, r =n;
    ll mid = l + (r - l) / 2;
    char comA = 'A', comB = 'A';
    ll k = 0;
    cout << mid << endl;
    while (k < 30) {
        cin >> comA;
        if (comA == 'L') {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
        mid = l + (r - l) / 2;
        cout << mid << endl;
        cin >> comB;
        if (comB == 'E')
            return 0;
        cout << mid << endl;
        k += 1;
    }
    l = 1, r = n;
    mid = l + (r - l) / 2;
    k = 0;
    while (k < 30) {
        cin >> comA;
        if (comA == 'E')
            return 0;
        cout << mid << endl;
        cin >> comB;
        if (comB == 'L') {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
        mid = l + (r - l) / 2;
        cout << mid << endl;
        k += 1;
    }
    return 0;
}