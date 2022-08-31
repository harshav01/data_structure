#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// no nee for top() function;
stack <int>s;
int minele;
void push(int x)
{
    if(s.empty())
    {
        s.push(x);
        minele=x;
    }    
    else
    {
        if(x>=minele){
            s.push(x);
        }
        else
        {
            int a= (2*x)-minele;
            minele=x;
            s.push(a);
        }      
    }    
}
void pop()
{
    if(s.empty())
        return;
    else
        if(s.top()<minele)
        {
            minele=((2*minele)-s.top());
            s.pop();
        }
        else
            s.pop();
}

int getmin()
{
    if(s.empty())
        return -1;
    return minele;
}
int top()
{
    if(s.empty())
    return -1;
    else
    {
        if(s.top()>=minele)
            return s.top();
        else
            return minele;
    }
}
int main(){
    push(5);
    push(7);
    push(3);
    pop();
    int a= getmin();
    cout<<a<<endl;
    return 0;
}