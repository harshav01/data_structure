#include <bits/stdc++.h>
using namespace std;

long long dsum(long long n)
{
    long long sum=0;
   while(n)
   {
    int digit=n%10;
    sum+=digit;
    n=n/10;

   }
   return sum;
}

int main() {
   long long  n;
   cin>>n;
   long long ans=dsum(n);
   

   while(ans!=1)
   {
    
    if(ans>0 and ans<9)
    {  
        cout<< 0;
    }
    ans=dsum(ans);
   }   
   cout<< 1;
   return 0;
}