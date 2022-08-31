#include<bits/stdc++.h>
#include<iostream>
using namespace std;
stack<int>s;
typedef pair<int,int>pi;
priority_queue<pair<int,int>>pq;
int c=0;
void push(int n)
{
    c++;
    pq.push(pi(c,n));
}
void pop()
{
    if(pq.empty()) cout<<"Nothing inside";
    c--;
    pq.pop();
}
int main(){
    push(1);
    push(3);
    push(5);
    push(2);
    push(9);
    pop();
    
    return 0;
}