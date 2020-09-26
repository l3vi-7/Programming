#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        if (n - 10 >= 0) {
            n -= 10;
        } else if ( n - 5 >= 0) 
            n -= 5;
        else if (n - 1 >= 0)
            n -= 1;
        count++;
    }

    cout << count << endl;

    return 0;
}