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

void merge (vector <int> &v, int l, int mid, int r) {
    vector <int> L, R;
    for (int i = l; i <= mid; i++)
        L.push_back(v[i]);
    for (int i = mid + 1; i <= r; i++)
        R.push_back(v[i]);

    int i = 0, j = 0, k = l;
    while (i < L.size() && j < R.size()) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i += 1;
            k += 1;
        } else {
            v[k] = R[j];
            j += 1;
            k += 1;
        }

    }

    while (i < L.size()) {
        v[k] = L[i];
        i += 1;
        k += 1;
    }

    while (j < R.size()) {
        v[k] = R[j];
        j += 1;
        k += 1;
    }
}


void MergeSort(vector <int> &v, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        MergeSort(v, l, mid);
        MergeSort(v, mid + 1, r);
        merge (v, l, mid, r);
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

    MergeSort(v, 0, n - 1);

    printArray (v);

    return 0;
}