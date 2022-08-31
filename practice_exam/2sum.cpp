#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    unordered_map<int,int>map;
     vector<int>v={1,5,3,4,5,5,5};
    // int target=14;bool flag=0;
    // for(int i=0;i<v.size();i++)
    //     map[v[i]++];
    // for(int i=0;i<v.size();i++)
    // {
    //     int ans=target-v[i];
    //     if(map.find(ans)!=map.end())
    //     {
    //         flag=1;
    //         cout<<i<<map[ans];
    //         break;
    //     }
    //     map[v[i]]=i;
    // }
    // if(flag==0)
    //     cout<<-1;
    int maxi=0;
    for(int i=0;i<v.size();i++)
    {
        map[v[i]]++;
        maxi=max(maxi,map[v[i]]);
    }
    cout<<maxi;
    return 0;
}