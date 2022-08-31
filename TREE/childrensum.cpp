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
int main(){
    
    return 0;
}

class Solution {
public:
    void childsum(TreeNode* root) {
        int child;int total=0;
        if(!root)
            return;
        if(root->left)
            child+=root->left->val;
        if(root->right)
            child+=root->right->val;
        if(child>=root->val)
            root->data=child;
        else
        {
            if(root->left)
                root->left->val=root->val;
            if(root->right)
                root->right->val=root->val;
        }
        childsum(root->left);
        childsum(root->right);
        if(root->left)
            total+=root->left->val;
        if(root->right)
            total+=root->right->val;
        if(root->left||root->right)
            root->data=total;
    }
};