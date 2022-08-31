#include<bits/stdc++.h>
#include<iostream>
using namespace std;

queue<int>q;

void push(int n)
{
    q.push(n);
    for(int i=0;i<q.size()-1;i++)
    {
        q.push(q.front());
        q.pop();
    }
}

void pop()
{
    if(q.empty())
        cout<<"Empty Queue";
    else
        q.pop();
}
void top()
{
    if(q.empty())
        cout<<"Empty Queue";
    else
        cout<<q.front()<<endl;
}
int main(){
    push(3);
    push(4);
    push(2);
    push(1);
    top();
    pop();
    top();
    return 0;
}