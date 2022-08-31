#include<bits/stdc++.h>
#include<iostream>
using namespace std;
stack<int>input;
stack<int>output;
void push(int n)
{
    input.push(n);
}
void pop()
{
    if(!output.empty())
        output.pop();
    else
    {
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
    }
}
void top()
{
    if(!output.empty())
       cout<< output.top();
    else
    {
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        cout<<output.top()<<" ";
    }
    
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