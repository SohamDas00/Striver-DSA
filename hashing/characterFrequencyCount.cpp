#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;

    int hash[256]={0};
    for(int i=0;i<str.size();i++){
        hash[str[i]]++;
    }

    int number;
    char ch;
    cout<<"Enter number of quries: ";
    cin>>number;
    while(number--){
        cin>>ch;
        cout<<"The frequency of ";
        cout<<ch<<": "<<hash[ch]<<endl;
    }
}