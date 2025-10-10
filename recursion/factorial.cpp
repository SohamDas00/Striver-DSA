#include<bits/stdc++.h>
using namespace std;

int fact(int num,int product){
    if(num==0) return product;
    product=product*num;
    fact(num-=1,product);
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is: "<<fact(num,1);
}