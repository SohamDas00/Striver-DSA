#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&vec,int l,int r){
    while(l<r){
        swap(vec[l],vec[r]);
        l++;
        r--;
    }
}

void rightRotate(vector<int>&vec,int k){
    int size=vec.size();
    k%=size;

    reverse(vec,0,size-1);
    reverse(vec,0,k-1);
    reverse(vec,k,size-1);
}

int main(){
    int size,place;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter place: ";
    cin>>place;
    rightRotate(vec,place);
    for(auto i:vec){
        cout<<i<<" ";
    }
}