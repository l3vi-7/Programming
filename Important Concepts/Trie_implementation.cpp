#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode *child[26];
    bool isEnd = false;

    TrieNode() {
        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
        isEnd = false;
    }

    void insert(string s);
    void search(string s);
    void print_all_word();
};

void TrieNode:: insert(string s) {
    TrieNode *temp = this;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (temp->child[(int)(c - 'a')] == nullptr) {
            TrieNode *nn = new TrieNode();
            temp->child[(int)(c - 'a')] = nn;
        }
        temp = temp->child[(int)(c - 'a')];
    }
    temp->isEnd = true;
}


void TrieNode:: search(string s) {
    TrieNode *temp = this;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (temp->child[(int)(c - 'a')] == nullptr) {
            cout << "NO" << endl;
            return;
        }
        temp = temp->child[(int)(c - 'a')];
    }
    if (temp->isEnd)
        cout << "YES" << endl;
}

bool isEmpty(TrieNode* root) {
    for (int i = 0; i < 26; i++) {
        if (root->child[i])
            return false;
    }
    return true;
}

TrieNode* delete_word(TrieNode *root, string s, int i) {
    if (!root)
        return nullptr;
    
    if (i == s.length()) {
        root->isEnd = false;
        if (isEmpty(root)) {
            delete(root);
            root = nullptr;
        }
        return root;
    }

    int index = s[i] - 'a';
    root->child[index] = delete_word(root->child[index], s, i + 1);
    
    if (isEmpty(root) && !root->isEnd) {
        delete(root);
        root = nullptr;
    }
    return root;
}


int main() {
    string dic[] = {"bad", "bat", "geek", "geeks", "cat", "cut", "zoo"};

    TrieNode *trie = new TrieNode();

    for (int i = 0; i < 7; i++) {
        trie->insert(dic[i]);
    }

    for (int i = 0; i < 7; i++) {
        trie->search(dic[i]);
    }

    trie->search("cater");
    trie = delete_word(trie, "zoo", 0);

    trie->search("zoo");
    for (int i = 0; i < 7; i++) {
        trie->search(dic[i]);
    }

    return 0;

}