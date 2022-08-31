#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,6,5,8,11};
    int target=14;
    // BRUTE FORCE

    // for(int i=0;i<5;i++)
    // {
    //     int ans=target-arr[i];
    //     for(int j=i+1;j<5;j++)
    //     {
    //         if(ans==arr[j])
    //         {
    //             cout<<i<<" "<<j;
    //             break;
    //         }
    //             
    //     }    
    // }

    unordered_map<int,int>map;
    for(int i=0;i<5;i++)
    {
        int ans=target-arr[i];
        if(map.find(ans)!=map.end())
        {
            cout<<map[ans]<<" "<<i;
        }
        map[arr[i]]=i;
            
    }
    return 0;
}