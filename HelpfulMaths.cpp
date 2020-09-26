#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector <int> v;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') 
            v.push_back(static_cast<int>(s.at(i)) - 48);
    }

    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v.at(i) << "+";
    }

    cout << v.at(v.size() - 1) << endl;

    return 0;
}