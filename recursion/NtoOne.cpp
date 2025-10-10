#include<bits/stdc++.h>
using namespace std;

void NtoOne(int num){
    if(num<1) return;
    cout<<num<<" ";
    NtoOne(num-=1);
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    NtoOne(num);
}