#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int s, p;
    cin >> s >> p;
    vector <pair <int, int>> segments;
    vector <int> points (p), count(p);

    for (int i = 0; i < s; i++) {
        int i1, i2;
        cin >> i1 >> i2;
        segments.push_back(make_pair(i1, i2));
    }

    sort(segments.begin(), segments.end());
    for (int i = 0; i < p; i++) {
        cin >> points[i];
    }

    int j, k;
    for (int i = 0; i < p; i++) {
        k = 0;
        for ( j = 0; j < s; j++)  {
            if(points[i] >= segments[j].first && points[i] <= segments[j].second)
                k += 1;
            else if (points[i] < segments[j].first)
                j = s;
        }
        count[i] = k;
        cout << k << " ";
    }
    cout << endl;
    return 0;
}