#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* bottom;
    node(int val)
    {
        data=val;
        next=NULL;
        bottom=NULL;
    }
};
node* merged(node* l1, node* l2)
{
    node* temp=new node(0);
    node* res=temp;
    while(l1!=NULL || l2!=NULL)
    {
        if(l1->data<l2->data)
        {
            temp->bottom=l1;
            l1=l1->bottom;
            temp=temp->bottom;
        }
        if(l1->data>=l2->data)
        {
            temp->bottom=l2;
            l2=l2->bottom;
            temp=temp->bottom;
        }
        if(l1) temp->bottom=l1;
        else temp->bottom=l2;
    }
    return res->bottom;
}
node* flatten(node* root)
{
    if(root==NULL || root->next==NULL)
        return root;
    root->next=flatten(root->next);
    root=merged(root,root->next);
    return root;
}
int main(){
    
    return 0;
}