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
    node*temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int intersection(node* l1,node* l2)
{
    if(l1||l2)
        return NULL;
    node* dummy1=l1;
    node* dummy2=l2;
    while(dummy1!=dummy2)
    {
        if(dummy1==NULL)
            dummy1=l2;
        else
            dummy1=dummy1->next;

        if(dummy2==NULL)
            dummy2=l1;
        else
            dummy2=dummy2->next;
    }
    return dummy1->data;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    append(head1,1);
    append(head1,2);
    append(head1,3);
    append(head2,5);
    append(head2,6);
    append(head2,7);
    int ans=intersection(head1,head2);
    // cout<<ans;
    display(head1);
    return 0;
}