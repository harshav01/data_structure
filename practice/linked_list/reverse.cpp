#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
    public:
        int data;
        node* next;
        node(int val)
        {   
            data=val;
            next=NULL;
        }
};
void append(node* &head, int val)
{
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
        head=n;
    else
    {
        while(temp->next!=NULL)
        {
           temp=temp->next ;
        }
        temp->next=n;
    }
}
void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* reverse(node* &head)
{
    node* prev=NULL;
    node*curr=head;
    node* nextptr=NULL;
    while(curr!=NULL)
    {
        nextptr=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nextptr;
        
    }
    return prev;
}

int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    // display(head);
    node* ans=reverse(head);
    display(ans);
    return 0;
}