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

    void change(Cricketers* c){
        c->runs = 210000;  // here (a->b = (*a).b)   v.imp

    }
    
};
int main(){
    Cricketers c1("Virat kohli", 250000,40.2);
    Cricketers* p = &c1;
    cout<<c1.runs<<endl;
    c1.change(&c1);  // can make function outside of the class 
    cout<<c1.runs<<endl;

}