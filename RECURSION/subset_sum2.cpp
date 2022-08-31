class Solution {
    public:
        void subset2(int index,vector<int>&arr,vector<int>&ds,vector<vector<int>>ans)
        {
            ans.push_back(ds);
            for(int i=index;i<arr.size();i++)
            {
                if(i==index&&arr[i]=arr[i-1])
                    continue;
                ds.push_back(arr[i]);
                subset2(index+1,arr,ds,ans);
                ds.pop_back();   
            }
        }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        subset2(0,nums,ds,ans);
    }
};