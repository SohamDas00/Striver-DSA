#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>myList;
    myList.push_back(10);
    myList.push_back(15);
    myList.push_front(1);
    for(auto x:myList){
        cout<<x<<" ";
    }
    cout<<endl;
    myList.pop_back();
    myList.pop_front();
    cout<<"After deleting: ";
    for(auto x:myList){
        cout<<x<<" ";
    }
    cout<<endl;

    deque<int>DQ;
    DQ.push_back(12);
    DQ.push_back(20);
    DQ.push_front(50);
    DQ.push_front(100);
    for(auto x:DQ){
        cout<<x<<" ";
    }
    DQ.pop_back();
    DQ.pop_front();
    cout<<endl;
    cout<<"After deleting: ";
    for(auto x:DQ){
        cout<<x<<" ";
    }
}