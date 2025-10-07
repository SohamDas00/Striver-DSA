#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x<0) return false;
    int newNumber=x;
    int revDigit=0;
    while(x!=0){
        int lastDigit=x%10;
        if (revDigit > INT_MAX / 10 || (revDigit == INT_MAX / 10 && lastDigit > 7))  return 0;
        if (revDigit < INT_MIN / 10 || (revDigit == INT_MIN / 10 && lastDigit < -8)) return 0;
        revDigit=(revDigit*10)+lastDigit;
        x/=10;
    }
    if(revDigit==newNumber) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int ans=isPalindrome(num);
    if(ans==1){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not palindrome";
    }
}