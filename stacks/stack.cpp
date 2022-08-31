// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
# define n 100
class stack{
 public:
 
    int* arr;
    int top;
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x)
    {
        top++;
        if(top==n-1)
            cout<<"Stack Overflow\n";
        else
            arr[top]=x;
    }
    void pop()
    {
        int x;
        if(top<0)
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
            x=arr[top];
            top--;
        }
    }
    
    void display()
    {
        int i;
        for(i=0;i<=top;i++)
            cout<<arr[i]<<endl;
    }                   
};

int main(){
    
    stack sh;
    sh.push(8);
    sh.push(9);
 
    sh.pop();
   
    
    sh.display();
    return 0;
}