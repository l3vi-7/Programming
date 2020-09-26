#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    IOS;
    string pat, text;
    cin >> pat >> text;
    int n = pat.size(), m = text.size();
    int i = 0, j = 1;
    vector <int> prefsuff (n, 0), pos;
    while (j < n) {
        if (pat[i] == pat[j]) {
            prefsuff[j] = i + 1;
            i += 1;
        } else {
            if (i > 0) {
                i = prefsuff[i - 1];
            }
        }
        j += 1;
    }

    for (auto i : prefsuff)
        cout << i << " ";
    cout << endl;

    i = 0, j = 0;
    while (j < m) {
        if (pat[i] == text[j]) {
            //cout << "In Equal " << i << " " << text[j] << endl;
            i += 1;
            //j += 1;
            if (i == n) {
                //cout << j << " " << i << endl;
                pos.push_back(j - (i - 1));
                i = 0;
            }
        } else {
            if (i != 0){
                //cout << i << " " << text[j] <<endl;
                i = prefsuff[i];
                j -= 1;
            }
        }
        j += 1;
    }

    for (auto i : pos)
        cout << i << " ";
    cout << endl;

    if (pos.size() == 0)
        cout << "Not Found" << endl;


    

    return 0;
}