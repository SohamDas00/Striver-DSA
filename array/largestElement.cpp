#include<bits/stdc++.h>
using namespace std;

int largest(vector<int>vec){
    int largest=INT_MIN;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>largest) largest=vec[i];
    }
    return largest;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"The largest number is: "<<largest(vec);
}