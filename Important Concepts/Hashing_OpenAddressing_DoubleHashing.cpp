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

void delete_element (vector <int> &mapk, int ele, int n) {
    int index = ele % n;
    if (mapk[index] == ele)
        mapk[index] = INT_MIN;
    else {
        for (int j = index + 1; mapk[j] != -1 && j < n; j++) {
                if (mapk[j] == ele) {
                    mapk[j] = INT_MIN;
                    break;
                }
            }
    }
}

int search_element (vector <int> mapk, int ele, int n) {
    int index = ele % n;
    if (mapk[index] == ele)
        return index;
    else {
        int j = 1;
        int hash = (index + j * (7 - (ele % 7))) % n;
        while (mapk[hash] != -1) {
            if (mapk[hash] == ele)
                return hash;
            j += 1;
            hash = (index + j * (7 - (ele % 7))) % n;
        }
        if (mapk[hash] == -1)
            return -1;
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
    
    vector <int> mapk (n, -1);
    for (int i = 0; i < n; i++) {
        int index = v[i] % n;
        if (mapk[index] == -1) {
            mapk[index] = v[i];
            cout << i << " " << index << " " << v[i] << endl;
        } else {
            int j = 1;
            int hash = (index + j * (7 - (v[i] % 7))) % n;
            while (mapk[hash] != -1) {
                j += 1;
                hash = (index + j * (7 - (v[i] % 7))) % n;
            }
            mapk[hash] = v[i];
        }
    }

    printArray(mapk);

     cout << "Enter element to search" << endl;
     int k;
     cin >> k;
    cout << "Key is : " << search_element(mapk,k, n) << endl;
    //  delete_element(mapk, k, n);
    //  printArray(mapk);
    //  cout << "Key is : " << search_element(mapk,k, n) << endl;


    return 0;
}


//14 24 54 10 100 5 25 35 23 11