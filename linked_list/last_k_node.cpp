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
int length(node* head)
{
    int l=1;
    node*temp=head;
    while(temp->next!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* head,int k)
{
    int count=1;
    node* newhead;
    node* newtail;
    node* temp=head;
    int l=length(head);
    k=k%l;
    while(temp->next!=NULL)
    {
        if(count==l-k)
            newtail=temp;
        if(count==l-k+1)
            newhead=temp;
        count++;
        temp=temp->next;
    }
    newtail->next=NULL;
    temp->next=head;
    return(newhead);
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
    node* a=kappend(head,3);
    display(a);
    return 0;
}