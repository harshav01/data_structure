#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class LRUCache{
    public:
        class node{
            public:
            int val;
            int key;
            node* next;
            node* prev;
            node(int key1,int value)
            {
                key=key1;
                val=value;
            }
        };
        node* head = new node(-1,-1);
        node* tail = new node(-1,-1);

        int cap;
        unordered_map<int,node*> m;

        LRUCache(int capacity)
        {
            cap=capacity;
            head->next=tail;
            tail->prev=head;
        }

void addnode(node* n)
{
    node* temp=head->next;
   
    head->next=n;
    temp->prev=n;
    n->next=temp;
    n->prev=head;
}
void delnode(node* n)
{
    node* delprev=n->prev;
    node* delnext=n->next;
    delprev->next=delnext;
    delnext->prev=delprev;
}
int get(int key1)
{
    if(m.find(key1)!=m.end())
    {
        node* resnode = m[key1];
        int res = resnode->val; 
        m.erase(key1);
        delnode(resnode);
        addnode(resnode);
        m[key1]=head->next;
        return res;
    }
    return -1;
}
void put(int key1,int value)
{
    if(m.find(key1)!=m.end())
    {
       node* resnode = m[key1];
    //    int res = resnode->val; 
       m.erase(key1);
       delnode(resnode); 
    }
    if(m.size()==cap)
    {
        m.erase(tail->prev->key);
        delnode(tail->prev);
    }
    addnode(new node(key1,value));
    m[key1]=head->next;
}
void display() {
   struct node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->val <<" ";
      ptr = ptr->next;
   }
}
};
int main(){
    int a;
    // LRUCache* obj = new LRUCache(3);
    // int a = obj->get(key);
    // obj->put(key,value)
    LRUCache* obj = new LRUCache(3);
     a = obj->get(1);
    obj->put(1,10);
    obj->put(3,15);
    obj->put(2,12);
     a = obj->get(3);
    obj->put(4,20);
     a = obj->get(2);
     obj->put(4,25);
     obj->display();
    return 0;
}