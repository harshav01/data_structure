#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
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
    else{
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=n;
    }
    // cout<<endl;
}
void display(node* &head)
{
    node* temp=head;
    if(head==NULL)
        cout<<NULL;
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}
node* add(node* &l1,node* l2)
{
    int carry=0;
    if(l2==NULL) return l1;
    if(l1==NULL) return l2;
    node* dummy = new node(0);
    node* temp=dummy;
    while(l1!=NULL || l2!=NULL || carry)
    {
        int sum=0;
        if(l1!=NULL)
        {
            sum=sum+l1->data;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            sum=sum+l2->data;
            l2=l2->next;
        }
        sum=sum+carry;
        carry=sum/10;
        node* nodes = new node(sum%10);
        temp->next=nodes;
        temp=temp->next;
    }
    return dummy->next;
 }
int main(){
    node* head=NULL;
    node* head2=NULL;
    append(head,2);
    append(head,8);
    append(head,9);
    append(head,7);
    append(head2,3);
    append(head2,2);
    append(head2,1);
    append(head2,1);
    display(head);
    display(head2);
    node* ans=add(head,head2);
    display(ans);
    return 0;
}