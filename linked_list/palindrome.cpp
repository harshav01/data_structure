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
node* reverse(node* head)
{
    node* previous=NULL;
    node*curr = head;
    node* nextptr;
    while(curr!=NULL)
    {
        nextptr=curr->next;
        curr->next=previous;

        previous=curr;
        curr=nextptr;
    }
    return previous;
}
// node* middle(node* head)
// {
//     node* fast=head;node* slow=head;
//     while(fast != NULL and fast->next != NULL)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     return slow;
// }
bool palindrome(node* head)
{
    node* slow =head;
    node* fast = head;
    if(head==NULL||head->next==NULL)
        return true;
    while(fast->next->next!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    // slow=middle(head);
    slow->next=reverse(slow->next);
    slow=slow->next;
    while(slow!=NULL)
    {
      if(head->data!=slow->data)
        return false;
      head=head->next;
      slow=slow->next;
    }
    return true;
   
}

int main(){
    node* head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,3);
    append(head,2);
    append(head,1);
   bool a = palindrome(head);
    cout<<a;
    return 0;
}