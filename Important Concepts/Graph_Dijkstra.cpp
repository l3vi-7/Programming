#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> graph (n);

	for (int i = 0; i < m; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		graph[a].push_back(make_pair(b, w));
		graph[b].push_back(make_pair(a, w));
	}

	vector <int> dist(n, INT_MAX);
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int src = 0;
	dist[src] = 0;
	int result = 0;
	pq.push(make_pair(0, src));

	while (!pq.empty()) {
		pair <int, int> temp = pq.top();
		int k = temp.first, u = temp.second;
		pq.pop();
		cout << u << " " << k << endl;
		for (auto v : graph[u]) {
			if (dist[v.first] > dist[u] + v.second) {
				dist[v.first] = dist[u] + v.second;
				pq.push(make_pair(dist[v.first], v.first));
			}
		}
	}
    // for (int i = 0; i < n; i++) {
    //     cout << parent[i] << " - " << i<< endl;
    // }
    cout << endl;
    for (int i = 0; i < n; i++) 
        cout << i << " " << dist[i] << endl;
	
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


