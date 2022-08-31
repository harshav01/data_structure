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
int middle(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    } 
    return slow->data;
}
int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,4);
    append(head,5);
    
    cout<<middle(head);

    return 0;
}