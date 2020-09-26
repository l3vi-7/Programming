#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

void printArray (vector <int> v) {
    cout << endl;
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

void insertionSort (vector <int> &v, int n) {
    vector <bool> visited (n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            int cycle_start = i, curr = i;
            int item = v[i];
            do {
                int j = 0;
                while (v[j] <= item && j < n)
                    j += 1;
                swap (v[j], item);
                curr = j;
                visited[j] = true;
            } while (curr != cycle_start);
        }
    }
}

int main()
{
    IOS;
    int n;
    cin >> n;
    vector <int> v (n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    insertionSort(v, n);

    printArray (v);

    return 0;
}