#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node *buildtree(){
    cout << "Enter the value for Node: ";
    int d;
    cin >> d;
    if(d == -1)
        return NULL;
    Node *root;
    root = new Node(d);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void levelOrder(Node* root){
    int max=INT_MIN;
        vector<int>ans;
        queue<Node*>q;
        if(root==NULL)
            return ;
        q.push(root);
        while(!q.empty())
        {
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                Node*node = q.front();
                q.pop();
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
                level.push_back(node->data);    
            } 
            // max=level[0];
            // for(auto it:level)
            // {
            //     if(it>max)
            //         max=it;
            // }
            int a=*max_element(level.begin(), level.end());
            ans.push_back(a);
        }
        for(auto it:ans)
            cout<<it<<endl;
    }

int main(){
    Node* root=buildtree();
    levelOrder(root);
    return 0;
}