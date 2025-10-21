#include<bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int>vec,int place){
    int size=vec.size();
    int currentPlace=place+1;
    int currentPlace2=place-1;
    reverse(vec.begin(),vec.begin()+currentPlace);
    reverse(vec.begin()+currentPlace2,vec.end());
    reverse(vec.begin(),vec.end());

    return vec;
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
    vector<int>ans=leftRotate(vec,place);
    for(auto i:ans){
        cout<<i<<" ";
    }
}