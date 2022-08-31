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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        queue<TreeNode*>q;
        queue<TreeNode*>tar;
        int a;
        vector<int> ans;
        unordered_map<pair<TreeNode*,bool>>visited;
        unordered_map<pair<TreeNode*,TreeNode*>>parent;
        if(root==NULL)
            return;
        q.push(root);
        while(!q.empty())
        {
            Treenode* temp=q.front();
            q.pop();
            if(temp->left)
            {
                parent[temp->left]=temp;
                q.push(temp->left);
            }
            if(temp->right)
            {
                parent[temp->right]=temp;
                q.push(temp->right);
            }     
        }
        tar.push(target);
        while(!tar.empty())
        {
            int size=tar.size();
            if(a++==k)
                break;
            for(int i=0;i<size;i++)
            {            TreeNode* node =q.front();
            q.pop();
            if(node->left and !visited[node->left])
            {
                q.push(node->left);
                visited[node->left]==true;
            }
            if(node->right and !visited[node->right])
            {
                q.push(node->right);
                visited[node->left]==true;
            }
            if(parent[node] and !visited[parent[node]])
            {
                q.push(parent[node]);
                visited[parent[node]]==true;
            }
            }

        }
        while(!q.empty())
        {
            TreeNode* curr=q.front();
            q.pop();
            ans.push_back(curr->val);
        }
        return ans;
    }
};
int main(){
    
    return 0;
}