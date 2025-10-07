#include<bits/stdc++.h>
using namespace std;

bool prime(int num){
    if(num<=1) return false;
    for(int i=2;i*i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int ans=prime(num);
    if(ans==0) cout<<num<<" is not prime";
    else cout<<num<<" is prime";
}
//TC-O(sqrt n)