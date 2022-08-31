#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* bottom;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
node* mergelist(node*l1,node* l2)
{
    node* head1=l1;
    node* head2 =l2;
    node* temp= new node();
    node* res = temp;
    while(l1!=NULL and l2!=NULL)
    {
        if(l1->data<l2->data)
        {
            temp->bottom=a;
            temp=temp->bottom;
            l1=l1->bottom;
        }
        else
        {
            temp->bottom=b;
            temp=temp->bottom;
            l2=l2->bottom;
        }
        if(a)
            temp->bottom=a;
        if(b)
            temp->bottom=b;
    }
    return res->bottom;
}
node* flatten(node* root)
{
    if(root==NULL||root->next==NULL)
        return root;
    root->next=flatten(root->next);
    root=mergelist(root,root->next);
    return root;
}
int main(){
    
    return 0;
}