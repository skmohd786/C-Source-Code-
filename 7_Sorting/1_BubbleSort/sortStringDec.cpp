#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "AZZYZXBDXJK";
    string str = ""; // extra string uses to store the conditional strings from s 
    for(int i = 0; i<s.size(); i++){
        if(s[i]>='X') str.push_back(s[i]);
    }
    int n = str.size(); //imp step 

    for(int i =0; i<str.size() ; i++){// print before sorting 
        cout<<str[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<n-1 ; i++){ 
        bool flag = true;
        for(int j = 0 ;j<n-1-i; j++){
            if(str[j]<str[j+1]){
                swap(str[j],str[j+1]);  
                flag = false;
            }
        }
        if(flag == true) break;
    }

    for(int i =0; i<str.size() ; i++){
        cout<<str[i]<<" ";
    }




  
    



}