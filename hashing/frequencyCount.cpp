#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }

    //precompute
    int hash[13]={0}; //Since it told the max size will be 12
    for(int i=0;i<size;i++){
        hash[vec[i]]+=1;
    }

    int find,num;
    cout<<"Enter find: ";
    cin>>find;
    while(find--){
        cin>>num;
        //fetch
        cout<<"The frequency of ";
        cout<<num<<": "<<hash[num]<<endl;
    }
}