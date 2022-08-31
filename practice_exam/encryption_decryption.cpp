#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string SecureOperation(int operation,string message,string key)
{
    int mindex=0;
    int keyindex=0;
    string ans="";
    for(int i=0;i<key.size();i++)
    {
        int val=key[i]-'0';
        if(val<0||val>9)
            return "-1";
    }
    if(message.size()==0 || key.size()==0)
    {
        return"-1";
    }
    if(operation==1)
    {
        while(mindex<message.size() and keyindex<key.size())
        {
            int count=key[mindex]-'0';
            for(int i=0;i<count;i++)
                ans.push_back(message[mindex]);
            mindex++;
            keyindex++;
        }

        while(mindex<message.size())
        {
            ans.push_back(message[mindex]);
            mindex++;
        }
    }
    else{
        while(mindex<message.size() and keyindex<key.size())
        {
            ans.push_back(message[mindex]);
            mindex=mindex+(key[keyindex]-'0');
            keyindex++;

        }
        while(mindex<message.size())
        {
            ans.push_back(message[mindex]);
            mindex++;
        }
    }
    return ans;
}

int main(){ 
    int operation;
    cin>>operation;
    string message="oppeeen";
    string key="123";
    cout<<SecureOperation(operation,message,key);

    return 0;
}