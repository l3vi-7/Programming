#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Element {
    int x;
    int y;
    int step;
    string path;
};

string bfs(int x, int y) {
    Element a = {0, 0, 1, ""};
    queue < Element > q;
    q.push(a);
    while(!q.empty()) {
        auto p = q.front();
        q.pop();
        if(abs(p.x) > abs(x) || abs(p.y) > abs(y)) {
            continue;
        }
        if(p.x == x && p.y == y){
            return p.path;
        }
        if(p.x != x) {
            q.push({p.x + p.step, p.y, p.step * 2, p.path + "E"});
            q.push({p.x - p.step, p.y, p.step * 2, p.path + "W"});
        }
        if(p.y != y) {
            q.push({p.x, p.y + p.step, p.step * 2, p.path + "N"});
            q.push({p.x, p.y - p.step, p.step * 2, p.path + "S"});
        } 
    }
    return "IMPOSSIBLE";
}

int main() {
    int t;
    cin >> t;
    int i = 1;
    while(t--) {
        int x, y;
        cin >> x >> y;
        string res = bfs(x, y);
        cout << "Case #" << i++ << ": " << res << endl;
    }
    return 0;
}