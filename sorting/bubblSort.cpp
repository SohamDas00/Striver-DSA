#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int> vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    for(int i=0;i<size;i++){
        int swapping=false;
        for(int j=0;j<size;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
                swapping=true;
            }
        }
        if(!swapping) break;
    }
    cout<<"The sorted vector is: ";
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
}