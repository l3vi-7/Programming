#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    string code;
    cin >> code;

    stack <pair<char, int>> stk;

    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '{' || code[i] == '[' || code[i] == '(') {
            stk.push({code[i], i});
        } else if (code[i] == '}' || code[i] == ']' || code[i] == ')') {
            if (!stk.empty()) {
                if (code[i] == '}') {
                    if (stk.top().first == '{')
                        stk.pop();
                    else {
                        cout << i + 1 << endl;
                        return 0;
                    }
                } else if (code[i] == ']') {
                    if (stk.top().first == '[')
                        stk.pop();
                    else {
                        cout << i + 1 << endl;
                        return 0;
                    }
                } else {
                    if (stk.top().first == '(')
                        stk.pop();
                    else {
                        cout << i + 1 << endl;
                        return 0;
                    }
                }
            } else {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }

    if (stk.empty())
        cout << "Success" << endl;
    else {
        cout <<stk.top().second + 1<< endl;
    }
    
    return 0;
}