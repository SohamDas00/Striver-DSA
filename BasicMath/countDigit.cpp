#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,count=0;
    cout<<"Enter number: ";
    cin>>num;
    while(num>0){
        int digit=num%10;
        count++;
        num/=10;
    }
    cout<<"The total digit is: "<<count;
}