#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string s, n;
    int k;
    while(t--) {
        cin >> s;
        cin >> n;
        if (s.size() % 2 != 0) {
            int mid = (s.size() / 2);
            for (int i = 0; i < s.size(); i++) {
                int k = static_cast <int> (n[i]) - 48;
                if ( i < mid) {
                    if ( i % 2 == 0) {
                        int max = static_cast<int> (s[i]) + k;
                        if (max > 122)
                            max = 97 + (max - 122) - 1;
                        cout << static_cast <char> (max);
                    }
                    else {
                        int min = static_cast<int> (s[i]) - k;
                        if ( min < 97)
                            min = 122 - (97 - min);
                        cout << static_cast <char> (min);
                    }
                }
                if ( i == mid ) {
                    int min = static_cast<int> (s[i]) - k;
                        if ( min < 97)
                            min = 122 - (97 - min);
                        cout << static_cast <char> (min);
                }
                if ( i > mid ) {
                    if ( i % 2 == 0) {
                        int min = static_cast<int> (s[i]) - k;
                        if ( min < 97)
                            min = 122 - (97 - min);
                        cout << static_cast <char> (min);
                    }
                    else {
                        int max = static_cast<int> (s[i]) + k;
                        if (max > 122)
                            max = 97 + (max - 122) - 1;
                        cout << static_cast <char> (max);
                    }
                }
            }
            cout << endl;
        } else {
            int mid = (s.size() / 2) - 1;
            for (int i = 0; i < s.size(); i++) {
                int k = static_cast <int> (n[i]) - 48;
                if ( i < mid) {
                    if ( i % 2 == 0) {
                        int min = static_cast<int> (s[i]) - k;
                        if ( min < 97)
                            min = 122 - (97 - min);
                        cout << static_cast <char> (min);
                    } else {
                        int max = static_cast<int> (s[i]) + k;
                        if (max > 122)
                            max = 97 + (max - 122) - 1;
                        cout << static_cast <char> (max);
                    }  
                }
                if ( i == mid ) {
                    int max = static_cast<int> (s[i]) + k;
                    if (max > 122)
                        max = 97 + (max - 122) - 1;
                    cout << static_cast <char> (max);
                }
                if ( i > mid ) {
                    if ( i % 2 == 0) {
                        int max = static_cast<int> (s[i]) + k;
                        if (max > 122)
                            max = 97 + (max - 122) - 1;
                        cout << static_cast <char> (max);
                    }
                    else {
                        int min = static_cast<int> (s[i]) - k;
                        if ( min < 97)
                            min = 122 - (97 - min);
                        cout << static_cast <char> (min);
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}