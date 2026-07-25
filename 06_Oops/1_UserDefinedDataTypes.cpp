#include<iostream>
using namespace std;
class Car{  // Car is a datatype and class
public:
    string name;
    int price;
    int seats; 
    string type;
};
void print(Car c){   
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;

}

int main(){

    Car c1;
    c1.name = "Honda city";
    c1.seats = 5;
    c1.type = "sedan";
    c1.price = 1200000;

    Car c2;
    c2.name = "swift";
    c2.seats = 4;
    c2.type = "hatchback";
    c2.price = 500000;

    Car c3;
    c3.name = "Toyota fortuner";
    c3.seats = 7;
    c3.type = "suv";
    c3.price = 5000000;

   print(c1);
   print(c2);
   print(c3); 


    
    
}