#include <bits/stdc++.h>

using namespace std;

void subsetSum(int i,int sum,vector <int> &a,int n,vector <int> &ans){

    if(i == n){
        ans.push_back(sum);
        return;
    }

    // If we pick the element
    subsetSum(i+1,sum+a[i],a,n,ans);

    // If we don't pick the element
    subsetSum(i+1,sum,a,n,ans);

    
}

vector < int > subset(vector < int > arr, int n) {
    vector < int > ans;
    subsetSum(0, 0, arr, n,ans);
    
    return ans;
}

int main(){
    int n=3,ele;
   
    vector <int> v{5,2,1};
    
 
   
    vector <int> ans;
    ans = subset(v,n);

    

    for(auto i : ans){
        cout << i << " ";
    }
    
    return 0;
}