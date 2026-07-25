#include<iostream>
#include<string>
using namespace std;
bool reverse(string s,int i){
    int n = s.size();
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return reverse(s,i+1);
}
int main(){
    string s = "malayalam";
    cout<<reverse(s,0); 
    
}