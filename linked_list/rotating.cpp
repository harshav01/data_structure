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
node* rotate(node* head,int k)
{
    node* temp=head;int len=1;
    if(head==NULL||head->next==NULL||k==0)
        return head;
    while(temp->next!=NULL)
    {
        len++;
        temp=temp->next;
    }
        
    temp->next=head;

    k=k%len;
    k=len-k;
    while(k-->0)
    {
        temp=temp->next;
    }
    head=temp->next;
    temp->next=NULL;
    return head;

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
    int k=2;
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    // append(head,6);
   node*a = rotate(head,k);
    display(a);
    return 0;
}