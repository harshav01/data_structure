#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
void permutation(vector<int>& nums,int index, vector<vector<int>>&ds)    
{
    if(index==nums.size())
    {
        ds.push_back(nums);
        return;
        
    }
        
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        permutation(nums,index+1,ds);
        swap(nums[index],nums[i]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ds;
        permutation(nums,0,ds);
        return ds;
    }
}; 
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    Solution obj;
    vector<vector<int>>ans=obj.permute(nums);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();i++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}