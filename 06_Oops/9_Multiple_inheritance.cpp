#include<iostream>
using namespace std;

class Vehicle{    // parent class
public:
    int topspeed;
    float mileage;
};

class Twowheeler : public Vehicle{       //child class / derived class
public:
};
class Fourwheeler : public Vehicle{       //child class / derived class
public:
};
class Scooty : public Twowheeler{       //grand child class
public:
    int bootspace;
};
class Car: public Fourwheeler{       //grand child class
public:
    int seater;
};
void print(Car b){
    cout<<b.topspeed<<" "<<b.mileage<<" "<<b.seater<<endl;
}
int main(){
    Car b1;
    b1.topspeed = 34;
    b1.mileage = 45; 
    b1.seater = 6;   
    print(b1);
    

    
}