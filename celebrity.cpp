#include<bits/stdc++.h>
#include<iostream>
using namespace std;
stack<int>s;

bool matrix[4][4]={{0,0,1,0},
                 {0,0,1,1},
                 {0,0,0,0},
                 {0,0,1,0}};

bool knows(int A,int B)
{
    return matrix[A][B];
}    

int findCelebrity(int n)
{
    for(int i=0;i<n;i++)
        s.push(i);
    while(s.size()>1)
    {
    int A=s.top();
    s.pop();
    int B=s.top();
    s.pop();
    if(knows(A,B))
        s.push(B);
    else
        s.push(A);
    }
    int C;
    C=s.top();
    s.pop();

    for(int i=0;i<n;i++)
    {
        if((i!=C)&&(knows(C,i)||!knows(i,C)))
            return -1;
    }
    return C;
}

int main(){
    int n=4;
    int ans=findCelebrity(n);
    if (ans==-1) cout<<"No celebrity found\n";
    else cout<<"Celebrity found "<<ans;
    return 0;
}