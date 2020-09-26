#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
vector <char> subs;
void subset (string s, int n, int k) {
    if (n == k){
        for (auto i : subs)
            cout << i << " ";
        if (subs.size() == 0)
            cout << "NULL";
        cout << endl;
    } else {
        subset(s, n, k + 1);
    subs.push_back(s[k]);
    subset(s, n, k + 1);
    subs.pop_back();
    }
}

void subset2 (string s, string curr, int k) {
    if (k == s.length())
        cout << curr << endl;
    else
    {
        subset2(s, curr, k + 1);
        subset2(s, curr + s[k], k + 1);
    }
    
}

int main()
{
    IOS;
    subset ("ABC", 3, 0);
    return 0;
}