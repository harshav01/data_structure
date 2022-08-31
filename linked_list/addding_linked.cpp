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
node* sum1(node* l1,node* l2)
{
    int sum=0;int carry=0;
    node* dummy = new node();
    node* temp = dummy;
    while(l1!=NULL||l2!=NULL||carry)
    {
        sum=0;
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
        carry = (sum/10);
        node* node = new node(sum%10);
        temp->next=node;
        temp=temp->next;
    }
   return dummy->next;
  
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
    node* rev = sum1(head,head2);
    display(rev);
    return 0;
}