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
node* merged(node* l1,node* l2)
{   
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    if(l1->data>l2->data)
        swap(l1,l2);
    node* res = l1;
    while(l1!=NULL and l2!=NULL)
    {
        node* temp=NULL;
        while(l1!=NULL and l1->data<= l2->data)
        {
            temp=l1;
            l1=l1->next;
        }
        temp->next=l2;
        swap(l1,l2);
    }
    return res;
}
int main(){
    node* head = NULL;
    node* head2 = NULL;
    append(head,3);
    append(head,4);
    append(head,5);
    append(head2,1);
    append(head2,2);
    append(head2,6);
    append(head2,7);
    display(head);
    display(head2);
    node* rev = merged(head,head2);
    display(rev);
    return 0;
}

