#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int x = 0;
    string s;
    for (int i = 0; i < t; i++) {
        cin >> s;
        if (s == "X++")
            x++;
        else if (s == "++X")
            ++x;
        else if (s == "X--")
            x--;
        else
            --x;
    }

    cout << x;

    return 0;
}