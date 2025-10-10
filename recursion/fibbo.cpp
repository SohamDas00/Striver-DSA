#include<bits/stdc++.h>
using namespace std;

void fibbo(int a,int b,int num,int count){
    if(count==num) return;
    int sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
    fibbo(a,b,num,count+1);
}

int main(){
    int num;
    cout<<"Enter range: ";
    cin>>num;
    cout<<"The fibonacci series is: 0 1 "; 
    fibbo(0,1,num,2);
}