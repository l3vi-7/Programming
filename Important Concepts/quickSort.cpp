#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (vector <int> &v, int l, int r) {
    int pivot = r;
    int pIndex = l - 1;

    for (int i = l; i < r; i++) {
        if (v[i] <= v[pivot]){
                pIndex += 1;
                swap(&v[i], &v[pIndex]);
            }
    }

    swap (&v[pIndex + 1], &v[pivot]);

    return pIndex + 1;
}

void quickSort(vector <int> &v, int l, int r) {
    if (l < r) {
        int pIndex = partition(v, l, r);
        quickSort(v, l, pIndex - 1);
        quickSort(v, pIndex + 1, r);
    }
}

int main()
{
    IOS;
    vector <int> v {7,10,15,15,4,12,19,1,2};

    for (auto i : v) {
        cout << i << " ";
    }
    cout <<endl;

    quickSort(v, 0, v.size() - 1);

    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}