#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfArray(vector<int>vec1,vector<int>vec2){
    set<int>st;
    for(int i=0;i<vec1.size();i++){
        st.insert(vec1[i]);
    }
    for(int j=0;j<vec2.size();j++){
        st.insert(vec2[j]);
    }
    int size=st.size();
    vector<int>vecfinal;
    for(auto i:st){
        vecfinal.push_back(i);
    }
    return vecfinal;
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
    vector<int>finalAns=unionOfArray(vec1,vec2);
    cout<<"The final ans is: ";
    for(auto i:finalAns){
        cout<<i<<" ";
    }
}