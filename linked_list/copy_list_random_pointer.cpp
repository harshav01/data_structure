#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* random;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
node* random(node* head)
{
    node* iter=head;
    node* first=head;
    
    while(iter!=NULL)
    {
        node* copy=new node(iter->data);
        node* first = iter->next;
        iter->next=copy;
        copy->next=first;
        iter=iter->next;
        first=iter;
    }
    iter=head;
    while(iter!=NULL)
    {
        if(iter->random!=NULL)
        {
            iter->next->random=iter->random->next;
        }
        iter=iter->next;
    }
    iter=head;
    first=head;
    node* pseudo=new node(0);
    node* copy=pseudo;
    while(iter!=NULL)
    {
        first=iter->next->next;
        copy->next=iter->next;
        iter->next=first;
        copy=copy->next;
        iter=iter->next;
    }
    return pseudo->next;
}
int main(){
    
    return 0;
}