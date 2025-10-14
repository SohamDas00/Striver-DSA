#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>vec){
    if(is_sorted(vec.begin(),vec.end())) return true;
    else return false;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    int ans=isSorted(vec);
    if(ans==1) cout<<"The vector is sorted";
    else cout<<"The vector is not sorted";
}