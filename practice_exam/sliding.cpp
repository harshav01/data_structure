#include <bits/stdc++.h>

using namespace std;

int MaximumSubarray(vector <int> arr,int n,int k){
    int i = 0, j = 0,sum = 0,maxi = 0;

    while (j < n)
    {
        sum = sum + arr[j];
        if(sum < k){
            j++;
        }
        else if(sum == k){
            maxi = max(maxi,j-i+1);
            j++;
        }
        else if(sum > k){
            while (sum > k)
            {
                sum -= arr[i];
                i++;
                j++;
            }
        }
    }
    
    return maxi;

}

int main(){
    vector <int> arr = {4,1,1,1,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 7;
    int ans = MaximumSubarray(arr,n,sum);
    cout << "The size of Maximum Subarray with sum as " << sum << " is " << ans << endl;
    return 0;
}