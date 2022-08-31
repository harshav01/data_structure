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

void first(node* &head,int val)
{
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
        head=n;
    else
    {
        head=n;
        head->next=temp;
    }
}
void del_head(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void del(node* &head,int val)
{
    if(head==NULL)
        return;

    if(head->next==NULL){
        del_head(head);
        return;
    }
        

    node* temp=head;
    while(temp->next->data=val)
        temp=temp->next;
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
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
int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    first(head,7);
    display(head);
    return 0;
}