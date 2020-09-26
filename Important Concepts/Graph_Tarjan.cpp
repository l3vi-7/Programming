#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &graph, vector<int> &disc, vector<int> &low, vector<int> &parent, stack<int> &stk, vector<bool> &visited, vector <bool> &stk_member, int vertex, int t) {
    visited[vertex] = true;
    stk.push(vertex);
    stk_member[vertex] = true;
    disc[vertex] = low[vertex] = t + 1;

    for (auto i : graph[vertex]) {
        if (!visited[i]) {
            parent[i] = vertex;
            dfs(graph, disc, low, parent, stk, visited, stk_member, i, t + 1);
            low[vertex] = min(low[vertex], low[i]);
        } else if (stk_member[i]) {
            low[vertex] = min(low[vertex], disc[i]);
        }

    }

    if (disc[vertex] == low[vertex]) {
            cout << "vertex " << vertex << endl;
            while (stk.top() != vertex) {
                cout << stk.top() << " ";
                stk_member[stk.top()] = false;
                stk.pop();
            }
            cout << stk.top() << " ";
            stk_member[stk.top()] = false;
            stk.pop();
        }
        cout << endl;

}



int main() {
	int n, m;
	cin >> n >> m;
	
    vector<vector<int>> graph(n);
    stack <int> stk;
    vector <bool> stk_member(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        graph[a - 1].push_back(b - 1);
        //graph[b].push_back(a);
    }

    vector<int> disc(n), low(n), parent (n, -1);
    vector<bool> visited(n, false);
    
    dfs(graph, disc, low, parent, stk, stk_member, visited, 0, 0);

    
    cout << endl;
    // cout << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << disc[i] << " " << low[i] << " " << parent[i] << endl;
    // }

	return 0;
}

// 5 5
// 0 1 
// 1 2
// 2 0
// 2 3
// 3 4

// 5 6
// 0 1 
// 1 2
// 2 0
// 2 3
// 3 4
// 4 2



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


