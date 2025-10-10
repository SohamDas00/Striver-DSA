#include<bits/stdc++.h>
using namespace std;

void onetoN(int num){
    if(num<1) return;
    onetoN(num-1);
    cout<<num;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    onetoN(num);
}