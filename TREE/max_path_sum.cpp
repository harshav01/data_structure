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
    int maxPathSum(TreeNode* root) {
        int sum=0;
        pathsum(root,sum);
        return sum;
    }
    int pathsum(TreeNode* root,int &sum)
    {
        if(root==NULL)
            return 0;
        int lh=max(0,pathsum(root->left,sum));
        int rh=max(0,pathsum(root->right,sum));
        sum=max(sum,lh+rh+root->val);
        return root->val +max(lh,rh);
    }
};
int main(){
    
    return 0;
}