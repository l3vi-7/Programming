#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

void printArray (vector <ll> v) {
    cout << endl;
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

ll partitionWithHigh (vector <ll> &v, ll l, ll r) {
    ll p = v[r];
    ll i = l - 1;

    for (ll j = l; j <= r - 1; j++)  
    {  
        if (v[j] < p)  
        {  
            i++;
            swap(v[i], v[j]);  
        }  
    }  
    swap(v[i + 1], v[r]);  
    return (i + 1); 
}


ll partitionWithLow (vector <ll> &v, ll l, ll r) {
    ll p = l;
    ll i = l, j = r;
    //cout << l << " " << r << endl;
    while (i < j) {
        while (v[i] <= v[p] && i < r)
            i += 1;
        while (v[j] > v[p] && j > l)
            j -= 1;
        //cout << i << " " << j << endl;
        if (i < j)
            swap(v[i], v[j]);
        //printArray(v);
    }
    swap (v[j], v[p]);
    //printArray(v);
    return j;
}

void QuickSortHigh(vector <ll> &v, ll l, ll r) {
    if (l < r) {
        ll pivot;
        pivot = partitionWithHigh (v, l,r);
        //pivot = partitionWithLow (v, l,r);
        QuickSortHigh(v, l, pivot - 1);
        QuickSortHigh(v, pivot + 1, r);
    }
}
void QuickSortLow(vector <ll> &v, ll l, ll r) {
    if (l < r) {
        ll pivot;
        //pivot = partitionWithHigh (v, l,r);
        pivot = partitionWithLow (v, l,r);
        QuickSortLow(v, l, pivot - 1);
        QuickSortLow(v, pivot + 1, r);
    }
}

void QuickSortAny(vector <ll> &v, ll l, ll r, ll index) {
    if (index >= 0 && index <= r) {
        swap(v[l], v[index]);
        QuickSortLow(v, l, r);
    } else
        cout << "Out of Bounds!!" << endl;
}

int main()
{
    IOS;
    ll n = 5;
    //cin >> n;
    vector<ll> a = {5,4,3,2,1};
    // for (ll i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    cout << "Choose Pivot : \n1. First Element\n2. Last Element \n3. Any Element" << endl;
    ll choice;
    ll index;
    cin >> choice;
    cout << endl;
    switch(choice) {
            case 1 : 
                QuickSortHigh(a, 0, n - 1);
                break;
            case 2 :
                QuickSortLow(a, 0, n - 1);
                break;
            case 3 :
                cout << "Enter the index: " << endl;
                cin >> index;
                QuickSortAny(a, 0, n - 1, index);
                break;
            default : cout << "Invalid Entry" << endl;
        }
    //partition (v, 2, n - 1);
    //partitionWithLow(v, 0, n - 1);

    printArray (a);

    return 0;
}