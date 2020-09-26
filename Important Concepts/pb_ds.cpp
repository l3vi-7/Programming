#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

int main() {
    typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

    indexed_set s;

    s.insert(3);
    s.insert(2);
    s.insert(9);
    s.insert(7);

    

    return 0;
}