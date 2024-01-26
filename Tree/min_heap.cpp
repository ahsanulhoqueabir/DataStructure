#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);


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
Node* buildTreeUtil(vector<int>& ip, int ss, int se)
{
    if(ss > se)
    {
        return NULL;
    }
    int mid = (ss + se)/2;
    Node* root = new Node(ip[mid]);
    root->left = buildTreeUtil(ip,ss,mid-1);
    root->right = buildTreeUtil(ip,mid+1,se);
    return root;

}




int main()
{
    AHSAN

    return 0;
}