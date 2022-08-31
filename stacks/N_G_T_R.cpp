#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int>v;
    stack <int> s;int n;
    // cout<<"give n\n";
    cin>>n;
    int arr[n];
    int i;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(i=n-1;i>=0;i--)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(s.size()>0 and s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 and s.top()<=arr[i])
        {
            while(s.size()>0 and s.top()<=arr[i])
                s.pop();
            if (s.size()==0)
                v.push_back(-1);
            else
            {
                v.push_back(s.top());
            } 
        }
        s.push(arr[i]);
    }
    // vector <int> :: iterator it;
    for (auto it = v.crbegin(); it != v.crend(); it++)
        cout << *it << endl;
    return 0;
}