#include <bits/stdc++.h>
using namespace std;

int main() {
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

    
    for (auto v : graph) {
        if (dist[v[1]] > dist[v[0]] + v[2]) {
            cout << " Negative Weight Cycle Found!" << endl;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        cout << dist[i] << " ";
    }
    cout << endl;

	return 0;
}

// 9 14
// 0 1 4
// 0 7 8
// 1 2 8
// 1 7 11
// 2 3 7
// 2 8 2
// 2 5 4
// 3 4 9
// 3 5 14
// 4 5 10
// 5 6 2
// 6 7 1
// 6 8 6
// 7 8 7


// 9 14
// 0 1 4
// 0 2 8
// 1 2 11
// 1 3 8
// 2 4 7
// 2 5 1
// 3 4 2
// 3 6 7
// 3 7 4
// 4 5 6
// 5 7 2
// 6 7 14
// 6 8 9
// 7 8 10


