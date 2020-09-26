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
        for (int j = index + 1; mapk[j] != -1 && j < n; j++) {
                if (mapk[j] == ele) {
                    return j;
                    break;
                }
            }
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
            for (int j = index + 1; j < n; j++) {
                if (mapk[j] == -1) {
                    mapk[j] = v[i];
                    break;
                }
            }
        }
    }

    printArray(mapk);

     cout << "Enter element to search" << endl;
     int k;
     cin >> k;
    cout << "Key is : " << search_element(mapk,k, n) << endl;
     delete_element(mapk, k, n);
     printArray(mapk);
     cout << "Key is : " << search_element(mapk,k, n) << endl;


    return 0;
}


//14 24 54 10 100 5 25 35 23 11