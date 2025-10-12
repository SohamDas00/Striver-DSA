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
        int minimum=i; 
        for(int j=i;j<size;j++){
            if(vec[j]<vec[minimum]) minimum=j;
        }
        swap(vec[minimum],vec[i]);
    }
    cout<<"The sorted vector is: ";
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
}