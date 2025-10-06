#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s1={1,2,3,2,4,5,5};//Set are ordered and unique
    for(auto x:s1){
        cout<<x<<" ";
    }
    cout<<endl;
    s1.insert(0);
    s1.insert(10);
    cout<<"After insert: ";
    for(auto x:s1){
        cout<<x<<" ";
    }
    cout<<endl;
    auto finds=s1.find(5);
    if(finds!=s1.end()){
        cout<<"Element found : "<<*finds;
    }
    else{
        cout<<"Element not found";
    }
}

//map--