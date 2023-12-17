#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

// create node structure 
struct Node{
    int value;
    Node *left,*right;

    Node(int val)
    {
        value = val;
        left= NULL;
        right = NULL;
    }
};

// insert node in BST
Node* insertBST(Node* root,int value)
{
    if(root == NULL)
    {
        return new Node(value);
    }
    if(value < root->value)
    {
        root->left = insertBST(root->left,value);
    }
    else
    {
        root->right = insertBST(root->right,value);
    }
    return root;

}

// print the tree inorder traversal : inorder travarsal print the tree in ascending order sorted array.

void inorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}




int main()
{
    AHSAN

    // create tree
    Node *root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    inorder(root);

    return 0;
}