#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
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
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
        head=n;
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;
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
node* CyclicStart(node* head)
{
    if(head||head->next)
        return NULL;
    node* slow=head;
    node* fast=head;
    node* dummy=head;
    while(fast->next!=NULL and fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
                
            while(slow!=dummy)
            {   dummy=dummy->next;
                slow=slow->next;
            }
        return dummy;
        }
    }
    return NULL;
}
int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    head->next->next=head;
    
    node* ans=CyclicStart(head);
    display(ans);
    return 0;
}