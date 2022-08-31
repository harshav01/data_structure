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
vector<int>bottom(TreeNode* root)
{
    map<int,int>mpp;
    queue<pair<TreeNode*,int>>q;
    vector<int>ans;
    if(root==NULL)
        retturn ans;
    q.push(root,0);
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        
        TreeNode* node=q.first();
        int line=q.second();
        mpp[line]=node->val;
        if(node->left!=NULL)
            q.push(node->left,line-1);
        if(node->right!=NULL)
            q.push(node->right,line+1);
    }
    for(auto it:mpp)
        ans.push_back(it.second());
    return ans;
}
int main(){
    
    return 0;
}