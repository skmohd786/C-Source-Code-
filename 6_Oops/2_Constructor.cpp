#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats; 
    string type;

    Car(){  // defaut constructor  

    }

    Car(string n, int p, int s, string t){ // argument passed could be less  
        name = n;
        price = p;
        seats = s;   //parameterised constructor
        type = t;
    }
};
void print(Car c){   
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;

}

int main(){
    Car c1("Honda city",1300000,5,"sedan");    // using constructor to initialise

    Car c2;
    c2.name = "swift";
    c2.price = 120000;
    c2.seats = 4;
    c2.type = "None"; 

    print(c1);
    print(c2);


    
}