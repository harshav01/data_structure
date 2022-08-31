#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int c=1;
void linearly(int n,int a)
{
   if(a>n)
   {
       return;
   }
    
    cout<<a<<endl;
    // a++;
    linearly(n,a+1);
}
void opposite(int n)
{
    if(n<=0)
        return;
    cout<<n<<endl;
    opposite(n-1);
}
void backtracking_linearly(int i,int n)
{
    if(i<1)
        return;
    backtracking_linearly(i-1,n); //print is kept after fun call to ensure that at the end , when calls are returning then only thr print statement will be executed.
    cout<<i;
}
void backtracking_opposite(int i,int n)
{
    if(i>n)
        return;
    backtracking_opposite(i+1,n);
    cout<<i;
}
int main(){
    int d=5;
    // linearly(d,1);
    // opposite(10);
    // backtracking_linearly(d,d);
    backtracking_opposite(1,d);
    return 0;
}