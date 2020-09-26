#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

void printArray (vector <list<int>> v) {
    cout << endl;
    for (auto i : v)
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    cout << endl;
}

void delete_element (vector <list<int>> &mapk, int ele, int n) {
    int index = ele % n;
    auto j = mapk[index].begin();
    for (auto i : mapk[index]) {
        if (i == ele) {
            break;
        } 
        j++;
    }
    if (j != mapk[index].end()) {
        mapk[index].erase(j);
    }
}

int search_element (vector <list<int>> mapk, int ele, int n) {
    int index = ele % n;
    int j = 0;
    for (auto i : mapk[index]) {
        if (i == ele) {
            return j;
        } 
        j += 1;
    }
    return -1;
}

int main()
{
    IOS;
    int n;
    cin >> n;
    vector <int> v (n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    vector <list<int>> mapk (n);
    for (int i = 0; i < n; i++) {
        int index = v[i] % n;
        mapk[index].push_back(v[i]);
    }

    printArray(mapk);

    cout << "Enter element to search" << endl;
    int k;
    cin >> k;
    int j = search_element(mapk,k, n);
    if (j != -1)
        cout << "Key is : {" << k % n << ", " << j << "}"<< endl;
    else
        cout << "Not Found" << endl;
    delete_element(mapk, k, n);
    printArray(mapk);
    j = search_element(mapk,k, n);
    if (j != -1)
        cout << "Key is : {" << k % n << ", " << j << "}"<< endl;
    else
        cout << "Not Found" << endl;


    return 0;
}


//14 24 54 10 100 5 25 35 23 11