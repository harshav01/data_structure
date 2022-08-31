#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    return 0;
}
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
    int widthOfBinaryTree(TreeNode* root) {
        int result;
        int first,last;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int size=q.size();
            int min=q.front().second;
            for(int i=0;i<size;i++)
            { 
                int index=q.front().second-min;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0)
                    first=index;
                if(i==size-1)
                    last=index;

                if(root->left!=NULL)
                    q.push(root->left,2*index+1);
                if(root->right!=NULL)
                    q.push(root->right,2*index+2);
            }
            ans=last-front+1;       
            }
        return ans;
        }    
};