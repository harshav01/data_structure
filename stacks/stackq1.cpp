#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector <int>v;
    stack <int>s;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int j=n-1;j>=0;j--)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(s.size()>0 and s.top()>arr[j])
            v.push_back(s.top());
        else if(s.size()>0 and s.top()<=arr[j])
        {
            while(s.size()>0 and s.top()<=arr[j])
                s.pop();
                if(s.size()==0)
                    v.push_back(-1);
                else 
                    v.push_back(s.top());    
        }
        s.push(arr[j]);
    }
   for(auto i =v.rbegin();i!=v.rend();i++)
            cout<<*i<<endl;
    return 0;
}