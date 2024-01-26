#include <bits/stdc++.h>
using namespace std;
#define AHSAN                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// basic node structure
struct Node
{
    int value;
    Node *left, *right;

    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};



// search item in tree using bst
Node* searchItem(Node* root,int item)
{
  if(root == NULL) {
    return NULL;
  }
  
  if(root->value == item)
  {
    return root;
  }  
  if(root->value > item)
  {
    return searchItem(root->left,item);
  }
    return searchItem(root->right,item);
}

int main()
{
    AHSAN

    
    return 0;
}