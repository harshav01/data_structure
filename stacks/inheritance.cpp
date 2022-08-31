#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Single Inheritance
class A{
    public:
    void func()
    {
        cout<<"single inheritance\n";
    }
};
class B :public A{
    public:
    void func2()
    {
        cout<<"Multiple inheritance\n";
    }
};
class C :public B{public:};


int main(){
    C c;
    c.func2();
    c.func();
    
    return 0;
}