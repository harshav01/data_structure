#include<bits/stdc++.h>
#include<iostream>
using namespace std;
stack<int>s;
stack<int>ss;

void push(int a)
{
    s.push(a);
    if(ss.empty()||a<ss.top())
    {
        ss.push(a);
    }
}
void pop()
{
    if(ss.empty()) cout<<"Stack Empty";
    int value =s.top();
    if(value==ss.top())
       ss.pop();

}
void getmin()
{
    if(ss.empty()) cout<<"Stack Empty";
    else cout<<ss.top();
}
int main(){
    push(18);
    push(19);
    push(13);
    push(15);
    push(14);
   pop();
    getmin();
    return 0;
}