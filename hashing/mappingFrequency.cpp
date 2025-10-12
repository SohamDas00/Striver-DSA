#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Ente size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }

    map<int,int>mp;
    for(int i=0;i<size;i++){
        mp[vec[i]]++;
    }

    int q,num;
    cout<<"Enter quiry: ";
    cin>>q;
    while(q--){
        cin>>num;
        cout<<"The frequency of ";
        cout<<num<<": "<<mp[num]<<endl;
    }
}