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
  } ;


class Solution {
public:
bool isLeaf(TreeNode* root)
  {
      if(!root->left||!root->right)
        return true;
    else
        return false;
  }
  void leftboundary(TreeNode* root,vector<int>&ans)
  { 
      TreeNode* current = root->left;
      while(current)
      { 
        if(!isLeaf(current))
            ans.push_back(current->val);
        if(current->left) 
            current = current->left;
        else
            current=current->right; 
      }
  }
  void leafnode(TreeNode* root,vector<int>&ans)
  {
      if(isLeaf(root)){ans.push_back(root->val);
        return;}
        
      if(root->left) 
        leafnode(root->left,ans);
      if(root->right) 
        leafnode(root->right,ans);

  }
  void rightboundary(TreeNode* root,vector<int>&ans)
  {
      vector<int>temp;
      TreeNode* curr = root->right;
      while(curr)
      {
            if(!isLeaf(curr))
                temp.push_back(curr->val);
            if(curr->left) 
                curr = curr->left;
            else
                curr=curr->right; 
            for(int i=temp.size()-1;i>=0;i--)
                    ans.push_back(temp[i]);
      }
  }
public:
    vector<int> printBoundary(TreeNode* root) {
      vector<int>ans;
      if(!root) return ans;
      if(!isLeaf(root)) 
        ans.push_back(root->val);
      leftboundary(TreeNode* root,ans);
      leafnode(TreeNode* root,ans);
      rightboundary(TreeNode* root,ans);
      return ans;
        
    }
};

int main(){
    
    return 0;
}