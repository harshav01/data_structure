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
node* intersection(node*head1,node* head2)
{
    if(head1||head2)
        return NULL;
    node* dummy1=head1;
    node* dummy2=head2;
while(dummy1!=dummy2)
{
    if(dummy1==NULL)
        dummy1=head2;
    else
        dummy1=dummy1->next;
    if(dummy2==NULL)
        dummy2=head1;
    else
        dummy2=dummy2->next;
}
return dummy1;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    append(head1,1);
    append(head1,2);
    append(head2,3);
    append(head2,4);
    append(head2,5);
    append(head2,6);
    append(head1,6);
    append(head1,7);
    append(head1,8);
    node* a = intersection(head1,head2);
    cout<<a;
    return 0;
}