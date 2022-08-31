#include<bits/stdc++.h>
#include<iostream>
using namespace std;
stack<int>s1;
stack<int>s2;

void push(int n)
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(n);
     while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}
void pop()
{
    if(s1.empty()) cout<<"Empty stack";
    else s1.pop();
}
void top()
{
    if(s1.empty()) cout<<"Empty stack";
    else cout<<s1.top()<<endl;
}

int main(){
    push(4);
    push(3);
    push(2);
    push(5);
    top();
    pop();
    top();
    return 0;
}