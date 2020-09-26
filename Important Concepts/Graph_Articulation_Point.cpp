#include <bits/stdc++.h>
using namespace std;

int t = 0;

void dfs(vector<vector<int>> &graph, vector<int> &disc, vector<int> &low, vector<int> &parent, vector<bool> &AP, vector<bool> &visited, int i, int time) {
    visited[i] = true;
    disc[i] = low[i] = t + 1;
    int child = 0;

    for (auto j : graph[i]) {
        if (!visited[j]) {
            child += 1;
            parent[j] = i;
            t += 1;
            dfs(graph, disc, low, parent,AP, visited, j, t + 1);
            low[i] = min(low[i], low[j]); //parent to children reachable if any child has a low val less than low val of parent then update low val of parent
            
            if (parent[i] == -1 && child > 1) {
                //cout << "DEBUG root case" << endl;
                AP[i] = true;
            }
            if (parent[i] != -1 && low[j] >= disc[i]) {
                //cout << "DEBUG NON root case " << j << endl;
                AP[i] = true;
            }
        } else {
            if (parent[i] != j)
                low[i] = min(low[i], disc[j]); //backedge Reachable
        }
    }
}



int main() {
	int n, m;
	cin >> n >> m;
	
    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        //graph[b].push_back(a);
    }

    vector<int> disc(n), low(n), parent (n, -1);
    vector<bool> AP (n, false), visited(n, false);
    
        dfs(graph, disc, low, parent, AP, visited, 0, 0);

    for (int i = 0; i < n; i++) {
        if (AP[i])
            cout << i << " ";
    }
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


