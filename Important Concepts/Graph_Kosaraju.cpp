#include <bits/stdc++.h>
using namespace std;

void finishTime_dfs(int i, vector<vector<int>> graph, stack<int> &stk, vector<bool> &visited) {
    visited[i] = true;
    for (auto j : graph[i]) {
        if (!visited[j]) {
            finishTime_dfs(j, graph, stk, visited);
        }
    }
    stk.push(i);
}

void reachable_dfs(int i, vector<vector<int>> graph, vector<bool> &visited) {
    visited[i] = true;
    for (auto j : graph[i]) {
        if (!visited[j]) {
            reachable_dfs(j, graph, visited);
        }
    }
    cout << i << " ";
}

int main() {
	int n, m;
	cin >> n >> m;
	
    vector<vector<int>> graph(n), graph2(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        //graph2[b - 1].push_back(a - 1);
    }

    stack <int> stk;
    vector<bool> visited(n, false), visited2 (n, false);

    for (int i = 0; i < n; i++) {
        if (!visited[i])
            finishTime_dfs(i, graph, stk, visited);
    }

    while (!stk.empty()) {
        int i = stk.top();
        //cout << i << " ";
        stk.pop();
        if (!visited2[i]) {
            reachable_dfs(i, graph2, visited2);
            cout << endl;
            cout << endl;
        }
    }

	return 0;
}

// 5 5
// 0 1 
// 1 2
// 2 0
// 1 3
// 3 4

// 6 7
// 0 1
// 1 3
// 3 2
// 2 0
// 2 4
// 4 5
// 5 4

// 6 6
// 0 1
// 1 3
// 3 2
// 2 0
// 2 4
// 4 5

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


