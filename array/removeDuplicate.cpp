#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>vec){
    int i=0;
    for(int j=0;j<vec.size();j++){
        if(vec[i]!=vec[j]){
            vec[i+1]=vec[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"The size of remove duplicate array is: "<<removeDuplicate(vec);
}