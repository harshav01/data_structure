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
node* reverse(node* &head)
{
    node* prev = NULL;
    node* curr=head;
    node* nextptr;
    while(curr!=NULL)
    {
      nextptr=curr->next;
      curr->next=prev;

        prev=curr;
        curr=nextptr;
    }
    return prev;
}
node* reversek(node* &head,int k)
{
    int count=0;
    node* prev = NULL;
    node* curr=head;
    node* nextptr;
    while(curr!=NULL and count<k)
    {
      nextptr=curr->next;
      curr->next=prev;

      prev=curr;
      curr=nextptr;
      count++;
    }
    if(nextptr!=NULL){
         head->next=reversek(nextptr,k);
    }  
    return prev;
}
int main(){
    int k=2;
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    append(head,6);
    display(head);
    // node* newhead = reverse(head);
    node* newhead1 = reversek(head,k);
    // display(newhead);
    display(newhead1);
    return 0;
}
