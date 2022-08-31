#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root)
            return " ";
        string s="";
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            if(node==NULL)
                s.append("#,");
            else
                s.append(to_string(node->val)+",");
            if(node!=NULL);
            {
                q.push(node->left);
                q.push(node->right);
            }
        }
        cout<<s;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)
            return NULL;
        stringstream s(data);
        string str;
        getline(s,str,",");
        TreeNode*root=new TreeNode (stoi(str));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            getline(s,str,",");
            if(str=="#")
                node->left=NULL;
            else
            {
                TreeNode* leftnode=new TreeNode(stoi(str));
                node->left=leftnode;
                q.push(leftnode);
            }
            getline(s,str,",");
            if(str=="#")
                node->right=NULL;
            else
            {
                TreeNode* rightnode=new TreeNode(stoi(str));
                node->right=rightnode;
                q.push(rightnode);
            }
        }
        return root;
    }
};
int main(){
    
    return 0;
}