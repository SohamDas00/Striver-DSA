#include<bits/stdc++.h>
using namespace std;

int fibbo(int num){
    if(num<=1) return num;
    int last=fibbo(num-1);
    int secLast=fibbo(num-2);
    return last+secLast;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"The fibonacci number is: "<<fibbo(num);
}