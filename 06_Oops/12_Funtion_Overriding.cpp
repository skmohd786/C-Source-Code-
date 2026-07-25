#include<iostream>
using namespace std;
class Scooty{
public:
    int topspeed;
    float mileage;

    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;  // first run if virtual absent then print vroom vroom if using child and parent class together 
    }
private:
    int bootspace;
};

class Bike : public Scooty{   // child class or derieved class
public:
    int gears;

    void sound(){
        cout<<"Droom Dromm"<<endl;
    }
};

int main(){
    Scooty *b = new Bike();   // object pointer  can initialise with bike to bike
    b->sound();
}