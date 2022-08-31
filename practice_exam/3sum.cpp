#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    unordered_map<int,int>map;vector<int>ans;
    vector<int>v={-1,0,1,2,-1,-4};int target=0;bool flag=0;
    for(int i=0;i<v.size();i++)
        map[v[i]++];
    for(int i=0;i<v.size();i++)
    {
        map[v[i]--];
        for(int j=i+1;j<v.size();j++)
        {
            map[v[j]--];
            if(map.find(-(v[i]+v[j]))!=map.end())
            {
                flag=1;
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                ans.push_back(-(v[i]+v[j]));
                break;
            }
            map[v[j]++];
        }
        map[v[i]++];
        if(flag==1)
            break;
    }
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}