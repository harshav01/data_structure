class Solution{
    public:
    void findCombination(int index,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(target==0)
        {
        ans.push_back(ds);
        return;
        }
        for(int i=index;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1]&&i>index)
                continue;
            if(arr[i]>target)
                break;
            if(a[i]<=target)
            {
                ds.push_back(arr[i]);
                findCombination(index+1, target-a[i],arr,ans,ds);
                ds.pop_back();
            }
        }
    }
public:
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, target, candidates, ans, ds);
    return ans;
}
};
