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
    else{
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=n;
    }
    // cout<<endl;
}
void display(node* &head)
{
    node* temp=head;
    if(head==NULL)
        cout<<NULL;
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}
node* reverse(node* head)
{
    if(head==NULL||head->next==NULL)
        return  head;
    node* prev=NULL;
    node* curr=head;
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
bool palindrome(node* head)
{
    if(head==NULL||head->next==NULL)
        return false;
    node* slow=head; node* fast=head;
    while(fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    while(slow!=NULL)
    {
        if(head->data!=slow->data)
            return false;
        slow=slow->next;
        head=head->next;
    }
    return true;
}
int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,3);
    append(head,2);
    append(head,1);
    append(head,1);
    display(head);
    // node* ans=reverse(head);
    cout<<palindrome(head);

    // display(ans);
    return 0;
}