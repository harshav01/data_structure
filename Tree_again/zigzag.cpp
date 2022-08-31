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
vector<int>TopView(TreeNode* &root)
{
    
    queue<pair<TreeNode*,int>>q;
    map<int,int>mpp;
    vector<int>ans;
    if(root==NULL)
        return ans;
    q.push({root,0});
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        TreeNode* node=it.first;
        int line=it.second;
        if(mpp.find(line)==mpp.end())
            mpp[line]=node->data;
        if(node->left!=NULL)
            q.push({node->left,line-1});
        if(node->right!=NULL)
            q.push({node->right,line+1});    
    }
    for(auto i:mpp)
        ans.push_back(i.second);
    return ans;
}
int main(){
    TreeNode* root=buildTree();
    vector<int>ans=TopView(root);
    for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    
        
    return 0;
}