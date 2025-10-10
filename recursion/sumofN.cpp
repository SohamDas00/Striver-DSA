#include<bits/stdc++.h>
using namespace std;

int sum(int num,int n,int sums){
    if(n>num) return sums;
    sums+=n;
    sum(num,n+=1,sums);
}

int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"Sum: "<<sum(num,1,0);
}