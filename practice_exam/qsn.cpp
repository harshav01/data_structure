#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<int>v,v2,v3,ans;
    stack<int>s;
    unordered_map<int,int>map;
    int a=426;
    int b=486;
    int c=652;
    
    while(a>0)
    {
        v.push_back(a%10);
        a=a/10;
    }
    while(b>0)
    {
        v2.push_back(b%10);
        b=b/10;
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            if(v[i]==v2[j])
                ans.push_back(v[i]);
        }
    }

    while(c>0)
    {
        v3.push_back(c%10);
        c=c/10;
    }
    for(int i=0;i<v3.size();i++)
    {
        for(int j=0;j<ans.size();j++)
        {
               if(v3[i]==ans[j])
               {
                    cout<<v3[i];
                    break;
               }            
        }
    }
   
    return 0;
}