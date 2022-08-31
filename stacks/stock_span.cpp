#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector <int>v;
    stack <pair<int,int>>s;
    int n;
    cout<<"n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(s.size()>0 and s.top().first>arr[i])
            v.push_back(s.top().second);
        else if(s.size()>0 and s.top().first<=arr[i])
        {
            while(s.size()>0 and s.top().first<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    for(int i=0;i<v.size();i++)
        v[i]=i-v[i];
    for(auto i=v.begin();i<v.end();i++)
        cout<<*i<<endl;
    return 0;
}