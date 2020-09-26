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

void selectionSort (vector <int> &a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_ele = 0;
        for (int j = 0; j <= n - 1 - i; j++) {
            if (a[max_ele] < a[j])
                max_ele = j;
        }
        swap(a[max_ele], a[n - 1- i]);
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

    selectionSort(v, n);

    printArray (v);

    return 0;
}