#include<bits/stdc++.h>
#include<iostream>
using namespace std;
stack <int> s;
stack <int> ss;
void push(int a)
{
    s.push(a);
    if(ss.size()==0 || a<=ss.top())
        ss.push(a);
}
int pop()
{
    if(s.empty())
        return -1;
    int value = s.top();
    if(ss.top()==value)
        ss.pop();
    return value;
}
int getmin()
{
    if(ss.empty())
        return -1;
    return ss.top();
    
}
int main(){
        push(18);
        push(19);
        push(24);
        push(15);
        push(15);
        int a= pop();
        // int b=pop();
        int c= getmin();
        cout<<c<<'\n';
    return 0;
}