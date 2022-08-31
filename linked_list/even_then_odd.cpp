#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int value){
            data=value;
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

void positions(node* &head)
{
    node* odd=head;
    node* even = head->next;
    node* evenstart = even;
    while(odd->next!=NULL and even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next==NULL)
        even->next=NULL;
}
int main(){
    node*head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    // append(head,6);
    display(head);
    positions(head);
    display(head);
    return 0;
}