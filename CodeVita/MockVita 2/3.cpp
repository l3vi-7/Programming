#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

bool sign(int x, int y) {
    if (x > 0 && y > 0 || x < 0 && y < 0)
        return true;
    else
        return false;
}

int main()
{
    IOS;
    int min_l, max_l, min_h, max_h;
    int nChocos = 0;
    cin >> min_l >> max_l >> min_h >> max_h;
    for (int i = min_l; i <= max_l; i++) {
        for (int j = min_h; j <= max_h; j++) {
            int l = i, h = j;
                if (l == 1 && h == 1){
                    //cout <<" debug" << endl;
                    nChocos += 1;}
                while (l > 1  && h > 1) {
                if (l < h)
                    swap(l, h);
                if (l % h != 0){
                    nChocos += floor(l / h);
                    l = l % h;
                } else {
                    nChocos += l/h;
                    l = 1;
                    h = 1;
                }
            }
            if (l > 1)
                nChocos += l; 
            if (h > 1)
                nChocos += h;
            //cout << nChocos << endl;
        }
    }
    cout << nChocos;

    return 0;
}