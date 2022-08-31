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
node* cyclic(node* head)
{
    node* slow=head;
    node* fast = head;
    node* dummy = head;
    if(head||head->next)
        return NULL;
    while(fast->next and fast->next->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            while(slow!=dummy)
            {
                slow=slow->next;
                dummy=dummy->next;
            }
        return dummy;
        }
    }   
    return NULL;
}

int main(){
    node* head = NULL;
    append(head,1);
    append(head,2);
    append(head,6);
    append(head,7);
    append(head,8);
    head->next->next->next->next=head;
    node* ans = cyclic(head);
    cout<<ans<<endl;
    return 0;
}