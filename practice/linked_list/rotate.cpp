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
node* rotate(node* &head,int k)
{
    node* ans;
    if(head==NULL || head->next==NULL || k==0)
        return head;
    node *temp=head;
    int len=1;
    while(temp->next!=NULL)
    {
        len++;
        temp=temp->next;
    }
    cout<<len<<"\n";
    temp->next=head;
    k=k%len;
    k=len-k;
    while(k-->0)
    {
        temp=temp->next;
    }
    ans=temp->next;
    temp->next=NULL;

    return ans;
}
int main(){
    node* head=NULL;
    node* head2=NULL;
    int k=3;
    append(head,2);
    append(head,8);
    append(head,9);
    append(head,7);
    append(head,5);
    append(head,2);
    display(head);
    node* ans=rotate(head,k);
    display(ans);
    return 0;
}