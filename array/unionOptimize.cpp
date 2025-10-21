#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfArray(vector<int>vec1,vector<int>vec2){
    int size1=vec1.size();
    int size2=vec2.size();
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<size1 && j<size2){
        if(vec1[i]<=vec2[j]){
            if(ans.size()==0 || ans.back()!=vec1[i]){
                ans.push_back(vec1[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=vec2[j]){
                ans.push_back(vec2[j]);
            }
            j++;
        }
    }
    while(i<size1){
        if(ans.size()==0 || ans.back()!=vec1[i]){
            ans.push_back(vec1[i]);
        }
        i++;
    }
    while(j<size2){
        if(ans.size()==0 || ans.back()!=vec2[j]){
            ans.push_back(vec2[j]);
        }
        j++;
    }
    return ans;
}

int main(){
    int size1,size2;
    cout<<"Enter size of vec1: ";
    cin>>size1;
    cout<<"Enter size of vec2: ";
    cin>>size2;
    vector<int>vec1(size1);
    vector<int>vec2(size2);
    cout<<"Enter vec1: ";
    for(int i=0;i<size1;i++){
        cin>>vec1[i];
    }
    cout<<"Enter vec2: ";
    for(int i=0;i<size2;i++){
        cin>>vec2[i];
    }
    vector<int>ans=unionOfArray(vec1,vec2);
    cout<<"The union of two array is: ";
    for(auto i:ans){
        cout<<i<<" ";
    }
}