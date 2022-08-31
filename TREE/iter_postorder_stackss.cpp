#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        if(root==NULL)
            return v;
        s1.push(root);
        TreeNode* node=root;
        while(!s1.empty())
        {   
            node=s1.top();
            s1.pop();
            s2.push(node);
            if(node->left!=NULL)
                s1.push(node->left);
            if(node->right!=NULL)
                s1.push(node->right);
        }
        while(!s2.empty())
        {
            v.push_back(s2.top()->val);
            s2.pop();
        }
        return v;
    }
};

int main(){
    

    return 0;
}