#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int revDigit=0;
    while(x!=0){
        int lastDigit=x%10;
        if (revDigit > INT_MAX / 10 || (revDigit == INT_MAX / 10 && lastDigit > 7))   return 0;
        if (revDigit < INT_MIN / 10 || (revDigit == INT_MIN / 10 && lastDigit < -8)) return 0;
        revDigit=(revDigit*10)+lastDigit;
        x/=10;
    }
    return revDigit;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The reverse number is: "<<reverse(num);
}