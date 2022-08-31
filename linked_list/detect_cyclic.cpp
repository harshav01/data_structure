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
bool detect_cyclic(node* head)
{
    node* fast=head; node* slow=head;
    if(head ==NULL || head->next==NULL )
        return false;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}
int main(){
    node* head = NULL;
    append(head,1);
    append(head,2);
    append(head,6);
    append(head,7);
    // head->next->next->next=head;
    if(detect_cyclic(head))
    cout<<"loop found";
    else
    cout<<"not found";
    // 2:23:57
    return 0;
}
