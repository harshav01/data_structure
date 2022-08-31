#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    void solve(int index,string s,vector<string>&ds,vector<vector<string>>&ans)
    {
        int i;
        if(index==s.length())
        {
            ans.push_back(ds);
            return;
        }
        for(i=index;i<=s.length();i++)
        {
            if(ispalindrome(i,index,s))
            {
                ds.push_back(s.substr(index,i-index+1));
                solve(index+1,s,ds,ans);
                ds.pop_back();
            }
        }
    }
public:
    bool ispalindrome(int end,int start,string s)
    {
        while(start!=end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        vector<vector<string>>ans;
        solve(0,s,ds,ans);
    }
};
int main(){
    
    return 0;
}