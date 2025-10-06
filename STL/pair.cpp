#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>p2={4,{5,6}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int,int>arr[]={{1,2},{4,5},{7,8},{9,10}};
    cout<<arr[2].second<<" "<<arr[3].first;
}