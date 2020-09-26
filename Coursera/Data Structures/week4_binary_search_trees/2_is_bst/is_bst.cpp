#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

struct Node {
  int key;
  int left;
  int right;

  Node() : key(0), left(-1), right(-1) {}
  Node(int key_, int left_, int right_) : key(key_), left(left_), right(right_) {}
};
static int prev = INT_MIN;
bool inorder(int i, const vector<Node> &tree) {
    //cout << " prev " << prev << endl;
    //cout << " i " << i << endl;
    if (i >= 0 && i < tree.size()) {
      if  (!inorder(tree[i].left, tree))
        return false;
      if (prev != INT_MIN && tree[i].key < prev)
        return false;
      prev = tree[i].key;
      return inorder(tree[i].right, tree);
    }
    return true;
  }

bool IsBinarySearchTree(const vector<Node> &tree) {
  // Implement correct algorithm here
  return inorder(0, tree);
}

int main() {
  int nodes;
  cin >> nodes;
  vector<Node> tree;
  for (int i = 0; i < nodes; ++i) {
    int key, left, right;
    cin >> key >> left >> right;
    tree.push_back(Node(key, left, right));
  }
  if (IsBinarySearchTree(tree)) {
    cout << "CORRECT" << endl;
  } else {
    cout << "INCORRECT" << endl;
  }
  return 0;
}
