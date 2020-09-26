#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n, x, y;
    string s, moves;
    while (t--) {
        moves = "k";
        x = 0; y = 0;
        cin >> n;
        cin >> s;
        //std::cout << " s" << s <<endl;
        //std::cout << " n " << n <<endl;
        for (int i = 0; i < n;i++) {
            if ((moves == "k" or moves == "L" or moves == "R") && (s[i] == 'U' or s[i] == 'D')) {
                if (s[i] == 'U') {
                    //std::cout << "debug S1 " << i << endl;
                    //std::cout << "x " << x << " y " << y << endl; 
                    y++;
                    moves = "U";
                } else {
                    //std::cout << "debug S2 " << i << endl;
                    //std::cout << "x " << x << " y " << y << endl; 
                    y--;
                    moves = "D";
                }
            }

            if ((moves == "k" or moves == "U" or moves == "D") && (s[i] == 'L' or s[i] == 'R')) {
                if (s[i] == 'R') {
                    //std::cout << "debug S1 " << i << endl;
                    //std::cout << "x " << x << " y " << y << endl; 
                    x++;
                    moves = "R";
                } else {
                    //std::cout << "debug S1 " << i << endl;
                    //std::cout << "x " << x << " y " << y << endl; 
                    x--;
                    moves = "L";
                }
            }
        }

        std::cout << x << " " << y << endl;
    }


    return 0;
}