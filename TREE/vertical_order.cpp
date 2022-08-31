/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>mpp;
        if(root==NULL)
            return ans;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            TreeNode *node=it.first;
            int vertical=it.second.first;
            int level=it.second.second;
            mpp[vertical][level].insert(node->val);
            if(node->left!=NULL)
                q.push({node->left,{vertical-1,level+1}});
            if(node->right!=NULL)
                q.push({node->right,{vertical+1,level+1}});
        }
        for(auto it:mpp)
        {
            vector<int>col;
            for(auto i:it.second)
            {
                col.insert(col.end(),i.second.begin(),i.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};

