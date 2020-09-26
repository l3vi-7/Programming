#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long int

using std::cin;
using std::cout;
using std::endl;
using std::vector;

struct Node {
  ll key;
  ll left;
  ll right;

  Node() : key(ULLONG_MAX), left(-1), right(-1) {}
  Node(ll key_, ll left_, ll right_) : key(key_), left(left_), right(right_) {}
};


void inorder_traversal(const vector<Node> &tree, vector<int> &result, int i) {
    if (i == -1) 
      return;
    inorder_traversal(tree, result, tree[i].left);
    result.push_back(i);
    inorder_traversal(tree, result, tree[i].right);
}

vector <int> in_order(const vector<Node>& tree) {
    vector<int> result;
    inorder_traversal(tree, result, 0);

    return result;
}


bool IsBinarySearchTree(const vector<Node> &tree) {
  // Implement correct algorithm here
  if (tree.size() == 0)
    return true;
  
  vector <int> result = in_order(tree);

  for (int i = 0; i < result.size() - 1; i++) {
    if (tree[result[i + 1]].key < tree[result[i]].key) 
      return false;
    if (tree[result[i]].key == tree[result[i + 1]].key && tree[result[i + 1]].left == result[i]) 
      return false;
  }

  return true;

}

int main() {
  ll nodes;
  cin >> nodes;
  vector<Node> tree;
  for (ll i = 0; i < nodes; ++i) {
    ll key, left, right;
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
