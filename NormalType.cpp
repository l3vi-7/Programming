#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    long long k;
    cin >> t;
    vector <long long int> v;
    
    set <int> s;
    for (int i = 0; i < t; i++) {
        cin >> k;
        v.push_back(k);
        s.insert(k);
    }
    int count = 0;
    int nde = s.size();

    for (int i = 0; i < t; i++) {
        set <int> s2;
        for (int j = i; j < t; j++) {
            s2.insert(v.at(j));
            if (s2.size() == nde) {
                //cout << "[ " << i + 1 << ", " << j + 1 << " ]" << endl;
                count++;
            }
                
        }
    }


    cout << count << endl;
    return 0;
}