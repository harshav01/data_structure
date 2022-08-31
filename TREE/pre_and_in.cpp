#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        TreeNode* root=formTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
public:
    TreeNode* formTree(vector<int>& preorder,int prestart,int preend,vector<int>& inorder,int instart,int inend,map<int,int>&mp)
    {
        if(prestart>preend||instart>inend)
            return NULL;
        TreeNode* root = new TreeNode(preorder[prestart]);
        int inroot=mpp[root->val];
        int inleft = inroot-instart;
        root->left=formTree(preorder,prestart+1,prestart+inleft,inorder,instart,inroot-1,mp);
        root->right=formTree(preorder,prestart+inleft+1,preend,inorder,inroot+1,inend,mp);
        return root;

    }
};
int main(){
    
    return 0;
}