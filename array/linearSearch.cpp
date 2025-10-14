#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>vec,int search){
    for(int i=0;i<vec.size();i++){
        if(vec[i]==search) return i;
    }
    return -1;
}

int main(){
    int size,search;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter search element: ";
    cin>>search;
    cout<<"The element is at: "<<linearSearch(vec,search);
}