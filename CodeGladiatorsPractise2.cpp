#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string s;
    while(t--) {
        int lower = 0, upper = 0, number = 0, spec = 0;
        cin >> s;
        for (auto i : s) {
            int k = (int) i;
            if (k >= 65 && k <= 90) {
                upper++;
            } else if (k >= 97 && k <= 122) {
                lower++;
            } else if (k >= 48 && k <= 57) {
                number++;
            } else 
                spec++;
        }

        //cout << upper << " " << lower << " " << number << " " << spec << endl;

        if (upper == lower && lower == number && number== spec) {
            cout << "Equality For Everyone" << endl;
        } else {
            cout << "No Equality" << endl;
        }
    }

    return 0;
}