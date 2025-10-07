#include<bits/stdc++.h>
using namespace std;

vector<int> divisor(int num){
    vector<int>ans;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    vector<int>ans=divisor(num);
    cout<<"The divisor are: ";
    for(int i:ans){
        cout<<i<<" ";
    }
}