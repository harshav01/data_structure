#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
        public: 
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  } ;
    public:
        vector<int> levelOrder(TreeNode* root) {
            vector<int>v;
            stack<TreeNode*>s;
            if(root==NULL)
                return v;
            s.push(root);
            while(!s.empty())
            {
                TreeNode* node=s.top();
                s.pop();
                if(root->right!=NULL) s.push(root->right);
                if(root->left!=NULL) s.push(root->left);    
                 v.push_back(node->val);
            }
            return v;
        }
};
int main(){
    
    return 0;
}

