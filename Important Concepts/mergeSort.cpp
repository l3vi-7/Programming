#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

void mergeVecs(vector <int> &v, int l, int r, int mid) {
    //cout << "debug 5" <<endl;
    //int i = l, j = mid + 1;
    vector <int> L, R;
    for (int i = l; i < mid + 1; i++) {
        L.push_back(v[i]);
    }

    for (int i = mid + 1; i < r + 1; i++) {
        R.push_back(v[i]);
    }

    int i = 0, j = 0;
    int k = l;
    while (i < L.size() && j < R.size()) {
        if (L[i] <= R[j]){
            v[k] = L[i];
            i++;
            k++;
        } else {
            v[k] = R[j];
            j++;
            k++;
        }
    }

    while (i < L.size()) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < R.size()) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector <int> &v, int l, int r) {
    //cout << "debug 1" <<endl;
    if (l < r) {
        //cout << "debug 2" <<endl;
        int mid = l + (r - l) / 2;
        mergeSort(v, l, mid);
        //cout << "debug 3" <<endl;
        mergeSort(v, mid + 1, r);
        //cout << "debug 4" <<endl;
        mergeVecs(v, l, r, mid);
    }
}

int main()
{
    IOS;
    vector <int> v {1,4,2,3,1,1,7,1,1};

    mergeSort(v, 0, v.size() - 1);

    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}