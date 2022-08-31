#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int c=0;
void print(string s)
{
    if(c==5)
        return;
    cout<<s<<endl;
    c++;
    print(s);
}
int main(){
    string s;
    cout<<"l\n";
    cin>>s;
    print(s);
    return 0;
}