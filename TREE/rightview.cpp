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
vector<int>right(TreeNode* root,level)
{
    vector<int>ans;
    if(root==NULL)
        return;
    if(level==ans.size())
        ans.push_back(root);
    right(root->right,level+1);
    right(root->left,level+1);    
}
int main(){
    

    return 0;
}