#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&vec,int l,int r){
    if(l>=r) return;
    swap(vec[l],vec[r]);
    reverse(vec,l+1,r-1);
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    reverse(vec,0,size-1);
    cout<<"After reverse: ";
    for(int j=0;j<size;j++){
        cout<<vec[j]<<" ";
    }
}