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
int main(){
    
    return 0;
}