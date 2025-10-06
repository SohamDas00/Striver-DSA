#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec(5,10);
    vec.push_back(20);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vector<int>vec2={1,2,3};
    for(auto x:vec2){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<char>vec3={'a','b','d'};
    vec3.push_back('e');//using push_back function
    vec3.insert(vec3.begin()+2,'c');//using insert function

    for(auto a:vec3){
        cout<<a<<" ";
    }
    cout<<endl;
    vec3.erase(vec3.begin()+2,vec3.begin()+5);
    cout<<"After erasing: ";
    for(auto a:vec3){
        cout<<a<<" ";
    }
}