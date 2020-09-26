#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector <long long int> ing, q;
    for (int i = 0; i < n; i++) {
        long long int k;
        cin >> k;
        ing.push_back(k);
    }

    for (int i = 0; i < n; i++) {
        long long int k;
        cin >> k;
        q.push_back(k);
    }

    long long int min = q[0] / ing[0];
    for (int i = 1; i < n; i++) {
        long long int k = q[i] / ing[i];
        if (k < min) 
            min = k;
    }

    cout << min << endl;
    return 0;
}