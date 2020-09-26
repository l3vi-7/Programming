#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int digitSum (int n, int sum = 0) {
    if (n == 0)
        return sum;
    return digitSum(n / 10, sum + (n % 10));
}

int main()
{
    IOS;
    char *p = "gfg";
    cout << p << endl;
    *p[1] = 'c';
    cout << p[1] << endl;
    return 0;
}