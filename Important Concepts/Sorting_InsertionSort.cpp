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
    for (int i = 1; i < n; i++) {
        int key = v[i];

        int j = i - 1;
        while (j >= 0 && key < v[j]) {
            v[j + 1] = v[j];
            j -= 1;
        }
        v[j + 1] = key;
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