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
int middle(node* head)
{
    node* fast=head;node* slow=head;
    while(fast != NULL and fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    append(head,6);
    // append(head,6);
   int a = middle(head);
    cout<<a<<endl;
    return 0;
}
