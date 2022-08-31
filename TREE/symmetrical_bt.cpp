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
    bool testing(TreeNode* lroot,TreeNode* rroot)
    {
        if(lroot==NULL and rroot==NULL)
            return true;
        if(lroot==NULL and rroot!=NULL)
            return false;
        if(lroot!=NULL and rroot==NULL)
            return false;
        if(lroot->val != rroot->val)
            return false;
        int cond1=testing(lroot->left,rroot->right);
        int cond2=testing(lroot->right,rroot->left);
        if(cond1 and cond2)
            return true;
        else
            return false;
        
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return(root->left,root->right);
    }
};
int main(){
    
    return 0;
}