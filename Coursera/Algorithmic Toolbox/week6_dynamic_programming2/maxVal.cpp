#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

vector <ll> MaxAndMin(vector <ll> digits, vector <char> op, ll i, ll j, vector <vector<ll>> M, vector <vector<ll>> m) {
    ll min_op = INT_MAX, max_op = INT_MIN, a, b, c, d;
    for (ll k = i; k < j; k++) {
        ll Mik, Mkj, mik, mkj;
        Mik = M[i][k];
        Mkj = M[k + 1][j];
        mik = m[i][k];
        mkj = m[k + 1][j];
        if (op.at(k) == '+') {
            a = Mik + Mkj;
            b = Mik + mkj;
            c = mik + Mkj;
            d = mik + mkj;
        } else if (op.at(k) == '-') {
            a = Mik - Mkj;
            b = Mik - mkj;
            c = mik - Mkj;
            d = mik - mkj;
        } else {
            a = Mik * Mkj;
            b = Mik * mkj;
            c = mik * Mkj;
            d = mik * mkj;
        }
        min_op = min(min(min(min(a, b), c), d), min_op);
        max_op = max(max(max(max(b, a), c), d), max_op);
    }
    return {max_op, min_op};
}

ll paranthesis (vector <ll> digits, vector<char> op) {
    ll n = digits.size();
    vector <vector<ll>> M (n, vector <ll> (n)), m (n, vector <ll> (n));

    for (ll i = 0; i < n; i++) {
        M[i][i] = digits[i];
        m[i][i] = digits[i];
    }

    for (ll s = 0; s < n; s++) {
        for (ll i = 0; i < n - s - 1; i++) {
            ll j = i + s + 1;
            vector <ll> Mm = MaxAndMin(digits, op, i, j, M, m);
            M[i][j] = Mm[0];
            m[i][j] = Mm[1];
        }
    }

    return M[0][n - 1];
}

int main()
{
    IOS;
    string s;
    cin >> s;
    vector <ll> d;
    vector <char> ops;
    for (auto i : s) {
        if (i == '+' || i == '-' || i== '*')
            ops.push_back(i);
        else
            d.push_back(i - '0');
    }

    cout << paranthesis(d, ops) << endl;
    return 0;
}