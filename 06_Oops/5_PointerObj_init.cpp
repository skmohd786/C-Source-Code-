#include<iostream>
using namespace std;
class Cricketers{
public:
    string name;
    int runs; 
    float avg;

    Cricketers(string name, int runs,float avg){
        this->name = name;    // this name reprsent this name of attribute in class
        this->runs = runs;
        this->avg = avg;
    }
    
};
int main(){
    
    Cricketers c1("Virat kohli", 250000,40.2);
    Cricketers* c2 = new Cricketers("Rohit Sharma",180000,47.2); // pointer initialise imp 

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;  // how its prints 
}