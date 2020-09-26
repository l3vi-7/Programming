#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

vector <int> subs1, subs2;
int diff = INT_MAX;


void subsets (int n, vector <int> &vec, int k) {
    if (n == k) {
        if (subs1.size() + subs2.size() == n) {
            ll sum1 = accumulate(subs1.begin(), subs1.end(), 0);
            ll sum2 = accumulate(subs2.begin(), subs2.end(), 0);
            if (abs (sum2 - sum1) < diff)
                diff = abs(sum2 - sum1);
            cout << diff << endl;
        }
    } else {
        subs2.push_back(vec[k]);
        subsets(n, vec, k + 1);
        subs2.pop_back();
        subs1.push_back(vec[k]);
        subsets(n, vec, k + 1);
        subs1.pop_back();
    }
}

int main()
{
    IOS;
    int k;
    cin >> k;
    vector <int> vec(k);
    for (int i = 0; i < k; i++) {
        cin >> vec[i];
    }

    subsets(vec.size(), vec, 0);

    cout << diff << endl;


    return 0;
}