#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node
{
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
    cout<<endl;
}
node* even(node* &head)
{
    node* odd=head;
    node* temp=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL and even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    return temp;
}
int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    append(head,5);
    display(head);
    node* ans=even(head);
    display(ans);
    return 0;
}