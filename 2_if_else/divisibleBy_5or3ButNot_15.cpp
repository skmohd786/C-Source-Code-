#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number :";
    cin>>a;
    if(a%5==0||a%3==0){
        if(a%15!= 0){
            cout<<"number is not div by 15 but 5 or 3 ";
        }
        else{ cout<<"Number is divisible by 15";
        }    
    }
    else cout<<"Number is not div by 5 or 3";
        
}