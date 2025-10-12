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
        int j=i;
        while(j>0 && vec[j-1]>vec[j]){
            swap(vec[j-1],vec[j]);
            j--;
        }
    }
    cout<<"The sorted vector is: ";
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
}