#include <bits/stdc++.h>
using namespace std;

int root(vector<int> &djs, int a) {
    while (djs[a] != a) {
        a = djs[a];
    }
    return a;
}

void u_f(vector<int> &djs, vector <int> &size, int a , int b) {
    int id_a = root(djs, a);
    int id_b = root(djs, b);
    
    if (id_a == id_b)
        return;
    
    if (size[id_a] > size[id_b]) {
        size[id_a] += size[id_b];
        djs[id_b] = id_a;
    } else {
        size[id_b] += size[id_a];
        djs[id_a] = id_b;
    }
}

bool isConnected(vector<int> &djs, int a, int b) {
    return (root(djs, a) == root(djs, b));
}

int main() {
	int n, m;
	cin >> n >> m;
    vector<vector<int>> pq;

    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        pq.push_back({w,a - 1,b - 1});
    }
    int result = 0;
    sort(pq.begin(), pq.end());
    cout << endl;
    for (auto i : pq) {
        cout << i[0] << " " << i[1] << " " << i[2] << endl;
    }
    vector<vector<int>> edges;
    vector <int> djs(n), size(n, 1);

    for (int i = 0; i < n; i++)
        djs[i] = i;

    for (int i = 0; i < m; i++) {
        vector <int> temp = pq[i];
        if (!isConnected(djs, temp[1], temp[2])) {
            u_f(djs, size, temp[1], temp[2]);
            result += temp[0];
            //cout << result << endl;
            edges.push_back(temp);
        }
    }

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


