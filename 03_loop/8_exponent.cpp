#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of base: ";
    cin>>a;
    int b;
    cout<<"Enter the value of exponent";
    cin>>b;
    // multiply the base into power times 
    int power = 1;
    for(int i=1;i<=b;i++){
        power= power*a;
        cout<<a<<" raised to power "<<i<<" is "<<power<<endl;
    }

    

}