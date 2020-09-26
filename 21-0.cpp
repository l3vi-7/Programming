//to_string error compiler 32 bits

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        string s = to_string(n);
        bool flag = false;

        if (n % 21 == 0) {
            flag = true;
        }

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '2' && s[i + 1] == '1')
                flag = true;
        }

        if (flag == false)
            cout << "The streak lives still in our heart!" <<endl;
        else
            cout << "The streak is broken!" << endl;
    }    

    return 0;
}