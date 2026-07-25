#include<iostream>   //palindrome
using namespace std;
int main(){
   for(int i=1; i<=5; i++){

    for(int j = 1; j<=5-i; j++){
        cout<<"  ";
    }
    int a = 1;
    for(int k = 1; k<=i; k++){
        cout<<a<<" ";
        a++;
    }
    for(int l = i-1; l>=1; l--){
        cout<<l<<" ";
    }
    cout<<endl;
    
}
   
}