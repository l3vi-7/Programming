#include<bits/stdc++.h>
using namespace std;

int left(int i) { return 2*i + 1;}
int right(int i) {return 2*i + 2;}
int parent(int i) {return (i - 1)/ 2;}

void heapify (vector <long long int> &v, vector < vector <long long int>> &p, int n, int m = 0) {
    int l = left(n);
    int r = right(n);
    int smallest = n;

    if (l < v.size() && v[l] < v[smallest])
        smallest = l;
    if (r < v.size() && v[r] < v[smallest])
        smallest = r;
    if (smallest != n) {
        m += 1;
        p.push_back({n, smallest});
        swap (v[smallest], v[n]);
        heapify(v, p,smallest);
    }
}


int main() {
    int n;
    cin >> n;
    vector <long long int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector < vector <long long int>> p;
    for (int i = parent(n - 1); i >= 0; i--)
        heapify(v, p, i);
    cout << p.size() << endl;
    for (auto i : p)
        cout << i[0] << " " << i[1] << endl;

    // cout << endl;
    // for (auto i : v)
    //     cout << i << " ";
    // cout << endl;
    return 0;
}