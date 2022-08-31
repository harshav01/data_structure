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
bool detect_cyclic(node* &head)
{
    if(head==NULL||head->next==NULL)
        return false;
    node* slow=head;
    node* fast=head;
    while(fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}
int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    head->next->next->next=head;
    if(detect_cyclic(head))
        cout<<"loop found\n";
    else
        cout<<"Not found\n";
    return 0;
}