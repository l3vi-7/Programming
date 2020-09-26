#include<bits/stdc++.h>
using namespace std;

void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    fastscan(m);
    fastscan(n);

    int k = m * n;
    if (k % 2 == 0) 
        cout << k / 2 << endl;
    else 
        cout << (k - 1) / 2 << endl;

    return 0;
}