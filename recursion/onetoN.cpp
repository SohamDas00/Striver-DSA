#include<bits/stdc++.h>
using namespace std;

void onetoN(int n,int num){
    if(n>num) return;
    cout<<n<<" ";
    onetoN(n+=1,num);
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    onetoN(1,num);
}