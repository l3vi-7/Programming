#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> graph (n);

	for (int i = 0; i < m; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		graph[a - 1].push_back(make_pair(b - 1, w));
		graph[b - 1].push_back(make_pair(a - 1, w));
	}

	vector <int> keys(n, INT_MAX), parent(n, -1);
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int src = 0;
	keys[src] = 0;
	vector <bool> inMST(n, false);
	int result = 0;
	pq.push(make_pair(0, src));

	while (!pq.empty()) {
		pair <int, int> temp = pq.top();
		int k = temp.first, u = temp.second;
		pq.pop();
		cout << u << " " << k << endl;
		inMST[u] = true;
		for (auto v : graph[u]) {
			if (!inMST[v.first] && keys[v.first] > v.second) {
				keys[v.first] = v.second;
				pq.push(make_pair(keys[v.first], v.first));
				parent[v.first] = u;
			}
		}
	}
	for (auto i : keys)
		result += i;
    // for (int i = 0; i < n; i++) {
    //     cout << parent[i] << " - " << i<< endl;
    // }
	cout << result << endl;
	
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


