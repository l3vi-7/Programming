#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

class BST {
    private:
        int val;
        BST *left, *right;
    public:

        BST();

        BST(int val);

        BST* insert (BST* root, int val);

        void Inorder(BST *root);

        BST* delete_node(BST* root, int val);
        BST* minValInRightSubtree(BST *root);
};

BST::BST() : val(0), left(NULL), right(NULL) {}

BST::BST(int val) {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
}

void BST:: Inorder (BST *root) {
    if (root!= nullptr) {
        Inorder(root->left);
        cout << root->val << " ";
        Inorder(root->right);
    }
}

BST* BST::insert(BST* root, int val) {
    if (!root) {
        return new BST(val);
    }

    if (val > root-> val) {
        root->right = insert(root->right, val);
    } else {
        root->left = insert(root->left, val);
    }
    return root;
}

BST* BST:: minValInRightSubtree(BST* root) {
    BST* temp = root;
    while (!temp && !temp->left) {
        temp = temp -> left;
    } 
    return temp;
}

BST* BST :: delete_node(BST * root, int val) {
    if (root == nullptr) {
        return root;
    }

    if (val > root-> val) {
        root->right = delete_node(root->right, val);
    } else if (val < root-> val) {
        root->left = delete_node(root->left, val);
    } else {
        //One child or No Child
        if (root->left) {
            BST *temp = new BST();
            temp = root->left;
            delete (root);
            return temp;
        } else if (root->right) {
            BST *temp = new BST();
            temp = root->right;
            delete(root);
            return temp;
        } else {
            delete(root);
            return root;
        }
        // Finding inorder successor for the key.

        BST*temp = minValInRightSubtree(root->right);

        root-> val = temp -> val;
        root->right = delete_node(root->right, temp->val);

    }

    return root;
}

int main()
{
    IOS;
    BST b, *root = NULL; 
    root = b.insert(root, 50); 
    b.insert(root, 30); 
    b.insert(root, 20); 
    b.insert(root, 40); 
    b.insert(root, 70); 
    b.insert(root, 60); 
    b.insert(root, 80); 
  
    b.Inorder(root); 


    cout << "Inorder traversal of the given tree \n"; 
    b.Inorder(root); 
  
    cout<<"\nDelete 20\n"; 
    root = b.delete_node(root, 20); 
    cout<<"Inorder traversal of the modified tree \n"; 
    b.Inorder(root); 
  
    cout<<"\nDelete 30\n"; 
    root = b.delete_node(root, 30); 
    cout<<"Inorder traversal of the modified tree \n"; 
    b.Inorder(root); 
  
    cout<<"\nDelete 50\n"; 
    root = b.delete_node(root, 50); 
    cout<<"Inorder traversal of the modified tree \n"; 
    b.Inorder(root); 

    

    return 0;
}