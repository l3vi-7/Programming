#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int sumfrom1 (int k, vector <int> tree) {
    int s = 0;
    while (k >= 1) {
        s += tree[k];
        k -= k & -k;
    }
    return s;
}

void updation (int k, int x, vector <int> &tree) {
    while (k <= tree.size()-1) {
        tree[k] += x;
        k += k & -k;
    }
}

int main()
{
    IOS;
    vector <int> v {0, 1, 3, 4, 8, 6, 1, 4, 2};
    vector <int> tree (9);
    for (int i = 1; i <= 8; i++) {
        int k = i;
        int l = k - (k & -k) + 1;
        int sum = 0;
        for (int j = l; j <= k; j++) {
            sum += v[j];
        } 
        tree[i] = sum;
    }
    cout << endl;
    cout << endl;
    for (auto i : tree) {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Sum from 1 to 8 : " << sumfrom1(8, tree) <<endl;
    cout << endl;
    cout <<"Sum from 3 to 7 : " << sumfrom1(7, tree) - sumfrom1(2, tree) <<endl;
    cout << endl;
    cout << endl;
    updation(3, 4, tree);
    cout << endl;
    for (auto i : tree) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}