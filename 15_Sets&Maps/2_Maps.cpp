#include<iostream>
#include<unordered_map>
using namespace std; 

int main(){
    unordered_map<string,int>m;   // key and val are going to inserted

    pair<string,int>p1;

    p1.first = "shaikh";
    p1.second = 12;

    // m.insert(p1);

    pair<string,int>p2;

    p2.first = "khan";
    p2.second = 34;

    // m.insert(p2);

    // second way of insertin pairs of elemets is ->  

    m["shaikh"] = 12;
    m["khan"] = 23;    // map like array 

    m.erase("shaikh");  

    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }

}