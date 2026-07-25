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

    void print(int runs){
        cout<<name<<" "<<this->runs<<" "<<avg<<endl;  // using this keyword assuring that arrtibutes must belongs to respective class
        
    }   
    int matches(){
        return runs/avg;
    }

    
};
int main(){
    Cricketers c1("Virat kohli", 250000,40.2);
    Cricketers c2("Rohit sharma", 150000,87.2);

    c1.print(4);
    c2.print(3);
    cout<<c1.matches()<<" "<<c2.matches()<<endl;  
}