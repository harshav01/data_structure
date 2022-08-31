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

node* sorted(node* l1,node* l2)
{
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;

    if(l1->data>l2->data)
        swap(l1,l2);
    node* ans=l1;

    while(l1!=NULL and l2!=NULL)
    {
        node*temp=NULL;
        while(l1!=NULL and l1->data<l2->data)
        {
            temp=l1;
            l1=l1->next;
        }
        temp->next=l2;
        swap(l1,l2);
    }
    return ans;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    append(head1,1);
    append(head1,2);
    append(head1,6);
    append(head1,7);
    append(head2,3);
    append(head2,4);
    append(head2,5);
    node* ans=sorted(head1,head2);
    display(ans);
    return 0;
}