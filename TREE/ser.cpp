#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class codec{
public:
    string serialize(TreeNode*root)
    {
        queue<TreeNode*>q;
        string s="";
        if(!root)return NULL;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node==NULL)
                s.append("#,");
            else
                s.append(to_string(node->val)+",");
            if(node!=NULL)
            {
                q.push(node->left);
                q.push(node->right);
            }
        }
        return s;
    }
    TreeNode* deserialize(string data)
    {
        queue<TreeNode*>q;
        if(data.size()==0)
            return NULL;
        string str;
        stringstream s(data);
        getline(s,str,",");
        TreeNode* root=new TreeNode(stoi(str));
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();

            getline(s,str,",");
            if(str=="#")
                node->left=NULL;
            else
            {
                TreeNode* leftnode=new TreeNode(stoi(node->val));
                node=node->left;
                q.push(leftnode);
            }
            getline(s,str,",");
            if(str=="#")
                node->right=NULL;
            else
            {
                TreeNode* rightnode=new TreeNode(stoi(node->val));
                node=node->right;
                q.push(rightnode);
            }
        }
        return root;
    }
};

int main(){
    
    return 0;
}