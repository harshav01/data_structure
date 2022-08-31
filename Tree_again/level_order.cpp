#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val)
    {
        data=val;
        left=right=NULL;
    }
};
TreeNode* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    TreeNode* root=new TreeNode(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}

vector<vector<int>>levelOrder(TreeNode* &root)
{
    vector<vector<int>>ans;
    if(root==NULL)
        return ans;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        vector<int>level;
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->left!=NULL)
                q.push(node->left);
            if(node->right!=NULL)
                q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

int main(){
    TreeNode* root=buildTree();
    vector<vector<int>>ans=levelOrder(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
            
    return 0;
}