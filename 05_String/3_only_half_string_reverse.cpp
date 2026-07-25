#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int main(){
    string s = "abcdefg";
    int n = s.size();
    // int i=0;          // n/2 sb already krdega
    // int j = n/2-1;
    

    for(int i=0; i<n;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    // while(j>i){
    //     int temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    // for(int i=0; i<n;i++){
    //     cout<<s[i]<<" ";
    // }
    reverse(s.begin(),s.begin()+n/2);
    for(int i=0; i<n;i++){
        cout<<s[i]<<" ";
    }
}