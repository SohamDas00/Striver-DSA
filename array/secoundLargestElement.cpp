#include<bits/stdc++.h>
using namespace std;

int secoundLargest(vector<int>vec){
    int secound,largest=INT_MIN;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>largest){
            secound=largest;
            largest=vec[i];
        }
        else if(vec[i]>secound && vec[i]<largest){
            secound=vec[i];
        }
        else if(secound==INT_MIN) return -1;
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
    cout<<"The secound largest number is: "<<secoundLargest(vec);
}
//O(n)