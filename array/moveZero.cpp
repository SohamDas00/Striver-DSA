#include<bits/stdc++.h>
using namespace std;

void moveZero(vector<int>&vec){
    int j=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>0){
            swap(vec[j],vec[i]);
            j++;
        }
    }
}

int main(){
    int size,place;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    moveZero(vec);
    cout<<"The modified array is: ";
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
}