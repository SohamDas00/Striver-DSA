#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int num){
    string numString=to_string(num);
    int length=numString.size();
    int sum=0,finalNum=num;
    while(num!=0){
        int digit=num%10;
        sum+=pow(digit,length);
        num/=10;
    }
    if(sum==finalNum) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int finalAns=checkArmstrong(num);
    if(finalAns==1){
        cout<<"The number is Armstrong";
    }
    else{
        cout<<"The number is not Armstrong";
    }
}