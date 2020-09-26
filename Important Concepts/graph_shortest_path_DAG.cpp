#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> v(n);
    vector<int>indegree(n);
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int adj, weight;
            cin >> adj >> weight;
            v[i].push_back({adj, weight});
            indegree[adj] += 1;
        }
    }

    vector <int> sort, dist(n, 1000);
    deque <int> dq;

    for (int i = 0; i < n; i++)
        if (!indegree[i])
            dq.push_back(i);
    
    while (!dq.empty()) {
        int temp = dq.front();
        sort.push_back(temp);
        dq.pop_front();
        for (auto i : v[temp]) {
            indegree[i.first] -= 1;
            if (!indegree[i.first])
                dq.push_back(i.first);
        }
    }

    for (auto i : sort)
        cout << i << " ";
    cout << endl;

    int source;
    cout << " Source :" << endl;
    cin >> source;

    dist[source] = 0;

    for (auto i : sort) {
        for (auto j : v[i]) {
            cout << j.first << " " << dist[j.first] << " " << dist[i] << " " << j.second << endl;
            if (dist[j.first] > dist[i] + j.second) {
                dist[j.first] = dist[i] + j.second;
            }
        }
    }

    for (auto i : dist) {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}

// 4
// 1
// 1 1
// 2
// 2 3
// 3 2
// 1
// 3 4
// 0
// 0 1 2 3