#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val)
    {
         data = val;
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
vector<int> RightView(TreeNode* &root)
{
    vector<int>ans;
    queue<TreeNode*>q;
    if(root==NULL)
        return ans;
    // if(level==ans.size())
    //     ans.push_back(root->data);
    // RightView(root->right,level+1);
    // RightView(root->left,level+1);
    // for(auto it:ans)
    //     cout<<it<<" ";

    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode* node=q.front();
            q.pop();
            if(i==size-1) ans.push_back(node->data);
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);    
        }
    }
    return ans;    
}
int main()
{
    int level=0;
    TreeNode* root=buildTree();
   vector<int>ans= RightView(root);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}