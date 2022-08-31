#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    unordered_map<int,int>map;
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    for(int i=0;i<n;i++)
        map[arr[i]]++;
    for(int i=0;i<n;i++)
    {
        map[arr[i]]--;
        for(int j=i+1;j<n;j++)
        {
            map[arr[j]]--;

            if(map.find(-(arr[i]+arr[j]))!=map.end())
            {   ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                ans.push_back(map[-(arr[i]+arr[j])]);
                break;
            }
           
            map[arr[j]]++;
            
        }
        map[arr[i]]++;
        break;
    }
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}