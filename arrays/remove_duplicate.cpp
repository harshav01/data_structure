#include<bits/stdc++.h>
#include<iostream>
using namespace std;

   vector<int> findDuplicate(vector<int>& nums) {
    map<int,int> m;
    vector<int>v;
    for(auto i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
    }
        int c;
    for(auto i:m)
    {
        if(i.second>1)
        {
            
            v.push_back(i.first);
        }        
    }
        return v;       
    }

int main(){
    vector<int> nums;
    vector<int> ans;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(1);
    ans= findDuplicate(nums);
   for(auto it:ans)
        cout<<it<<endl;
    // for(int i=0;i<9;i++)
    // {
    //     for(int j=i+1;j<9;j++)
    //     {
    //         if(arr[i]==arr[j])
    //             cout<<arr[i];
    //     }
    // }
    // return 0;
}