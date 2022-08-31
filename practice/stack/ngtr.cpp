#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int>GreatestRight(int arr[],int n)
{
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(s.size()!=0 && s.top()>arr[i])
            v.push_back(s.top());
        else if(s.size()!=0 && s.top()<=arr[i])
        {
            while(s.top()<=arr[i] && s.size()>0)
                s.pop();
            if(s.size()==0)
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    return v;
}

int main(){
    int arr[]={1,3,0,0,1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans=GreatestRight(arr,n);

    for(auto i=ans.crbegin();i<ans.crend();i++)
        cout<<*i<<" ";

    return 0;
}