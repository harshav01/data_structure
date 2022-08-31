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
int diameter(TreeNode* root,int &dia)
{ 
    if(root==NULL)
            return 0;

    int lh=diameter(root->left,dia);
    int rh=diameter(root->right,dia);
    dia=max(dia,lh+rh);
    return 1+max(lh,rh);
}
int main(){
    TreeNode* root=buildTree(); 
    int dia=0;
    cout<<diameter(root,dia);
    return 0;
}