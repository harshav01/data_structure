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
void append(int val,node* &head)
{
    node * n = new node(val);
    node* temp=head;
    if(head==NULL)
        head=n;
    else{
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=n;
    }
    
}
void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int length(node* &head)
{
    node* temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
        
    return l;

}
node* appendk(node* head,int k)
{
    node* newhead;
    node* newtail;
    node* temp=head;
    int l=length(head);
    k=k%l;int count=1;
    // while(temp->next!=NULL)
    //     temp->next=head;
    while(temp->next!=NULL)
    {
        if(count==l-k)
            newtail=temp;
        if(count==l-k+1)
            newhead=temp;
        count++;
        temp=temp->next;
    }
    temp->next=head;
    newtail->next=NULL;
    return newhead;
}
int main(){
    node* head=NULL;
    append(1,head);
    append(2,head);
    append(3,head);
    append(4,head);
    append(5,head);
    append(6,head);
    display(head);
    node* ans= appendk(head,3);
    display(ans);
    return 0;
}
