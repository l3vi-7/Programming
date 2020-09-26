#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
    	cin >> n >> m;
    	
        vector<vector<int>> graph;
    
        for (int i = 0; i < m; i++) {
            int a, b, w;
            cin >> a >> b >> w;
            graph.push_back({a - 1, b - 1, w});
        }
        
        vector<int> dist(n, INT_MAX);
    
        dist[0] = 0;
    
        for (int i = 0; i < n - 1; i++) {
            for (auto v : graph) {
                if (dist[v[1]] > dist[v[0]] + v[2]) {
                    dist[v[1]] = dist[v[0]] + v[2];
                }
            }
        }
    
        bool flag = false;
        for (auto v : graph) {
            if (dist[v[1]] > dist[v[0]] + v[2]) {
                flag = true;
                break;
            }
        }
        cout << flag << endl;
    }
    return 0;
}