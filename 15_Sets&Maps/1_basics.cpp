#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;

    s.insert(1);
    s.insert(2);    
    s.insert(3);    
    s.insert(4);
    s.insert(5);
    
    // for each loop

    cout<<s.size()<<endl;

    for(int ele: s){
        cout<<ele<<" ";
    }

    cout<<endl;

    // check if target exist or not 

    int tar = 10;

    if(s.find(tar) != s.end()){
        cout<<"target exist";
    }
    else cout<<"not exist";
}