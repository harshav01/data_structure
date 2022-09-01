#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int lcs(string x,string y,int n,int m)
{
    string ans="";
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++){
        t[i][0] = 0;
    }
    for(int j=0;j<n+1;j++){
        t[0][j] = 0;
    }

    

    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
        {
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    
    int maximum = 0;

    for(int i = 1; i < n+1; i++)
        for(int j = 1; j < m+1; j++)
            maximum = max(maximum,t[i][j]);

    return maximum;
    // int i=n;int j=m;
    // while(i>0 && j>0)
    // {
    //     if(x[i-1]==y[j-1])
    //     {
    //         ans.push_back(x[i-1]);
    //         i--;j--;
    //     }
    //     else
    //     {
    //         if(t[i][j-1]>t[i-1][j])
    //             j--;
    //         else
    //             i--;
    //     }
    // }
    // reverse(ans.begin(),ans.end());
    // return ans;
}
int main(){
    string x="aacabdkacaa";
    string y=x;
    reverse(x.begin(),x.end());
    int n=x.size();
    int m=y.size();
    cout<<lcs(x,y,n,m);
    // for(int i=0;i<ans.size();i++)
    //     cout<<ans[i];
    return 0;
}