#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string str=" mera naam hai babbar babbar";
    // Creation
   unordered_map<string,int>m;

    //Insertion
    // 1
    pair<string,int>p = make_pair("babbar",3);
    m.insert(p);

    //2
    pair<string,int>pair2("naam",1);
    m.insert(pair2);

    //3
    m["mera"]=0;

    m["mera"]=2;

// SEARCHING

  cout<<m["babbar"]<<endl;

  cout<<m.at("babbar")<<endl;

//   cout<<m.at("unknown")<<endl;
   cout<<m["unknown"]<<endl;

   cout<<m.at("unknown")<<endl;

   cout<<m["mera"]<<endl;

   cout<<m.size()<<"\n";


   // to check presence

  cout<< m.count("you")<<"\n";
  cout<< m.count("mera")<<"\n";

  // erase
cout<< "Erased"<<m.erase("mera")<<"\n";
    cout<<m.size()<<"\n"; 


// ITERATING

for(auto i:m)
cout<<i.first <<" "<<i.second<<endl;

    return 0;
}
