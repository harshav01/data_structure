#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val)
    {
        data=val;
        left=right=NULL;
    }
};

TreeNode* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    TreeNode* root=new TreeNode(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}

int depth(TreeNode* &root)
{
    if(root==NULL)
        return 0;
    int lh=depth(root->left);
    int rh=depth(root->right);
    return 1+max(lh,rh);
}
bool balancedTree(TreeNode* root)
{
    if(root==NULL)
        return true;
    int lh=depth(root->left);
    int rh=depth(root->right);
    if(abs(lh-rh)<1 and balancedTree(root->left) and balancedTree(root->right))
        return true;
    return false;
}
int main(){
    TreeNode* root=buildTree();  
    cout<<depth(root);
    cout<<balancedTree(root);
    return 0;
}