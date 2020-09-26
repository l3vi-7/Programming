#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

vector <ll> primitive(ll amount) {
    vector <ll> min_ops(amount + 1, INT_MAX), path;
    min_ops[0] = 0;
    min_ops[1] = 0;
    for (ll i = 2; i <= amount; i++) {
        ll state;
        ll change = min_ops[i];
        if (i % 2 == 0){
            min_ops[i] = min(min_ops[i], min_ops[i / 2] + 1);
            if (change != min_ops[i]){
                state = 2;
                change = min_ops[i];
            }
        }
        if (i % 3 == 0){
            min_ops[i] = min(min_ops[i], min_ops[i / 3] + 1);
            if (change != min_ops[i]){
                state = 3;
                change = min_ops[i];
            }
        }
        if (i - 1 >= 0){
            min_ops[i] = min(min_ops[i], min_ops[i - 1] + 1);
            if (change != min_ops[i]){
                state = 1;
                change = min_ops[i];
            }
        }
        path.push_back(state);
    }
    path.push_back(min_ops[amount]);
    return path;
}


int main()
{
    IOS;
    ll amount;
    cin >> amount;
    vector <ll> v {2, 3, 1}, op, p;
    op = primitive(amount);
    cout << op.back() << endl;
    op.pop_back();
    ll kk = amount;
    while (kk > 1) {
        p.push_back (kk);
        if (op[kk - 2] == 1) {
            kk -= 1;
        } else if (op[kk - 2] == 2) {
            kk /= 2;
        } else
            kk /= 3;
    }
    p.push_back(1);
    for (int i = p.size() - 1; i >= 0; i--)
        cout << p[i] << " ";
    cout << endl;
    return 0;
}