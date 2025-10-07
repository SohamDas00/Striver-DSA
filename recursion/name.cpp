#include<bits/stdc++.h>
using namespace std;

void printName(string name,int num,int n){
    if(n==num) return;
    cout<<name<<" ";
    printName(name,num,n+=1);
}

int main(){
    string name;
    int num;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter number: ";
    cin>>num;
    printName(name,num,0);
}