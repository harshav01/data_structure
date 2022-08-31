#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    
    student()
    {
        cout<<"Default constructor"<<endl;
    }


    student(string s,int a,bool g)
    {
        cout<<"PARAMETERIZED CONSTRUCTOR"<<endl;
        name=s;
        age=a;
        gender=g;
    } 

    student(student &a)
    {
        cout<<"Copy Constructor\n";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void setName(string s)
    {
        name=s;
    }
    void getName()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
    void display()
    {
            cout<<"Name ="<<name<<endl;
            cout<<"Age ="<<age<<endl;
            cout<<"Gender ="<<gender<<endl;       
    }
};
int main(){
    // student arr[3];string s;
    // for (int i=0;i<1;i++)
    // {
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setname(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<1;i++)
    // {
    //     arr[i].display();
    // }
    student a("urvi",12,1);
    a.display();
    student b;
    student c=a;
    c.display();
    return 0;
}