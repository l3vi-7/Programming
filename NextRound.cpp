#include <bits/stdc++.h>
using namespace std;

void fastscan(int &x)
{
    bool neg = false;
    register int c;
    x = 0;
    c = getchar();
    if (c == '-')
    {
        neg = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c = getchar())
        x = (x << 1) + (x << 3) + c - 48;
    if (neg)
        x *= -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k;
    fastscan(t);
    fastscan(k);
    int count = 0;
    vector<int> v;
    while (t--)
    {
        int g;
        fastscan(g);
        v.push_back(g);
    }

    //for (int i = 0; i < v.size(); i++)
    //    cout << v.at(i) <<endl;
    for (int i = 0; ((i < v.size() && v.at(i) >= v.at(k - 1))); i++)
    {
        if (v.at(i) > 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}