#include<iostream>
using namespace std;

class Scooty{    // parent class
public:
    int topspeed;
    float mileage;
private:
    int bootspace;
};

class Bike : public Scooty{       //child class / derived class
public:
    int gears;
};

void print(Bike b ){
    cout<<b.topspeed<<" "<<b.mileage<<" "<<b.gears<<endl;
};
int main(){
    Bike b1;
    b1.topspeed = 34;
    b1.mileage = 45;
    // b1.bootspace = 6; not access because of private class
    b1.gears = 4;
    print(b1);
    

    
}