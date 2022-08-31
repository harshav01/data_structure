#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class LRUCache{
    public:
    class node{
        public:
        int data;
        int key;
        node* next;
        node* prev;
        node(int key1,int val){
            key=key1;
            data=val;
        }
    };
    node* head=new node(-1,-1);
    node* tail=new node(-1,-1);

    unordered_map<int,node*>m;
    int cap;
    LRUCache(int capacity)
    {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void addnode(node* newnode)
    {
        node* temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        tail->prev=newnode;
    }
    void delenode(node* delnode)
    {
        node* delprev=delnode->prev;
        node* delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    int get(int key)
    {
        if(m.find(key)!=m.end())
        {
            node* resnode=m[key];
            int res=resnode->data;
            m.erase(key);
            delenode(resnode);
            addnode(resnode);
            m[key]=head->next;
            return res;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if(m.find(key)!=m.end())
        {
            node* resnode=m[key];
            m.erase(key);
            delenode(resnode);

        }
        if(m.size()==cap)
        {
            m.erase(tail->prev->key);
            delenode(tail->prev);
            
        }
        addnode(new node(key,value));
        m[key]=head->next;
        
    }
    void display() {
        struct node* ptr;
        ptr = head;
        while(ptr != NULL) {
            cout<< ptr->data <<" ";
        ptr = ptr->next;
   }
}

};
int main(){
    
    LRUCache* obj = new LRUCache(2);
    cout<< obj->get(1)<<" ";
    obj->put(1,10);
    obj->put(2,20);
    cout<< obj->get(1);
  
    return 0;
}