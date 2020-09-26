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
    int t;
    fastscan(t);
    int c;
    map <int, int> m ;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++) {
            fastscan(c);
            m[i] += c;
        }
    }
    int count = 0;
    for (int i = 0; i < t; i++) {
        if (m.at(i) >= 2)
            count++;
    }

    cout << count <<endl;
    return 0;
}