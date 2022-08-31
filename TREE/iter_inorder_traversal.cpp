#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    return 0;
}

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
        stack<TreeNode*>s;
        if(root==NULL)
            return v;
        TreeNode* temp=root;
        while(true)
        {   
            if(temp!=NULL)
            {
                s.push(temp);
                temp=temp->left;
            }
            else
            {
                if(s.empty()==true) break;
                temp = s.top(); //
                s.pop();
                v.push_back(temp->val);// to get to the previous node...ater encountering NULL
                temp=temp->right;
            }
        }
        return v;
    }
};