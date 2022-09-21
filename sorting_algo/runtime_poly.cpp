#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Base{
    public:
        void fun()
        {cout<<"base";}
        void game()
        {
            cout<<"base class game"<<endl;
        }
};
class Derived:public Base
{
    public:
        void fun()
        {
            cout<<"Derived";
            cout<<"Derived class game"<<endl;
        }       
};
int main(){
    Base *b;
    Base obj_base;
    Derived obj_derived;
    b=&obj_derived;
    b->fun();
    
    
    return 0;
}