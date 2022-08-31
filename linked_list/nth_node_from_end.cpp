#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void append(node* &head,int val)
{
    node* n = new node(val);
    node* temp = head;
    if(head==NULL)
        head=n;
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=n;
    }
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* ndelnode(node* head,int n)
{
    node* dummy=new node(0);
    dummy->next=head;
    node*fast=dummy;
    node*slow=dummy;
    for(int i=0;i<n;i++)
        fast=fast->next;
    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return dummy->next;
}
int main(){
    int k;
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    append(head,6);
    display(head);
    node* a=ndelnode(head,4);
    display(a);
    return 0;
}
