#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int mine;
stack<int> s;
void push(int a)
{
    if(s.size()==0)
        s.push(a);
        mine=a;
    else
        {
            if(a>=mine)
                s.push(a);
            else if(a<mine)
            {
                mine=a;
                s.push(2*a-mine);)
            }
        }      
}
int pop()
{

}
int main(){
    
    return 0;
}