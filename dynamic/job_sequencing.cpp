#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Job{
    int id;
    int deadline;
    int profit;
};
class Solution{
    public:
        bool static comparison(Job a,Job b)
        {
            return (a.profit>b.profit);
        }
        pair<int , int>JobScheduling(Job arr[],int n)
        {
            int profit=0;int jobcount=0;
            sort(arr,arr+n,comparison);
            int maxdeadline=arr[0].deadline;
            for(int i=1;i<n;i++)
            {
                maxdeadline = max(maxdeadline,arr[i].deadline);
            }
            int slot[maxdeadline+1];
            for(int i=0;i<maxdeadline;i++)
                slot[i]=-1;

            for(int i=0;i<n;i++)
                for(int j=arr[i].deadline;j>0;j--)
                {
                    if(slot[j]==-1)
                    {
                        slot[j]=i;
                        jobcount++;
                        profit=profit+arr[i].profit;
                        break;
                    }
                }
            return make_pair(jobcount,profit);
        }
};
int main(){
    int n=4;
    Job arr[]={{1,4,20},{2,1,10},{3,2,40},{4,2,30}};
    Solution ob;
    pair<int , int>ans=ob.JobScheduling(arr,n);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}