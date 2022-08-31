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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;bool flag=true;
    queue<TreeNode*>q;int index;
    if(root==NULL)
        return ans;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int>level(size);
        for(int i=0;i<size;i++)
        {
            TreeNode* node = q.front();
            q.pop();
            if(flag)
                index=i;
            else
                index=size-1-i;
            level[index]=node->val;
            if(node->left!=NULL)
                q.push(node->left);
            if(node->right!=NULL)
                q.push(node->right);
        }
        flag=!flag;
        ans.push_back(level);
    }
     return ans;       
    }
};
int main(){
    
    return 0;
}