#include<bits/stdc++.h>
using namespace std;

int secoundSmallest(vector<int>vec){
    int secound,smallest=INT_MAX;
    for(int i=0;i<vec.size();i++){
        if(vec[i]<smallest){
            secound=smallest;
            smallest=vec[i];
        }
        else if(vec[i]<secound && vec[i]>smallest){
            secound=vec[i];
        }
    }
    return secound;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"The secound smallest number is: "<<secoundSmallest(vec);
}