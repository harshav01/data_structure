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

class Solution{
    bool path(vector<int>&arr,TreeNode* node,int b)
    {
        if(node==NULL)
            return false;
        arr.push_back(node->val);
        if(node->val==b)
            return true;
        if(path(arr,node->left,b)||path(arr,node->right,b)) // if any of them is giving true....else                                                            //   go to pop()
            return true;
        arr.pop();
        return false;
        
    }
    vector<int>Solve(Treenode* root,int b);
    {
    vector<int>arr;
    if(root==NULL)
        return arr;
    path(arr,root,b);
    return arr;
    }
};
int main(){
    
    return 0;
}