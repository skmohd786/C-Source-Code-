#include<iostream>
using namespace std;
class Fraction{
public:
    int num;
    int den;

    Fraction(int num,int den){  //  par. constructor
        this->num = num;
        this->den = den;
    }
    void display(){
        cout<<num<<" / "<<den<<endl;

    }
    Fraction operator +(Fraction f){  // here operator+ = add() receiving f2 here
        int newNum = (this->num*f.den) + (f.num*this->den);
        int newDen = f.den * this->den;
        Fraction ans(newNum,newDen);
        return ans;

    }
    

};

int main(){
    Fraction f1(1,2);
    Fraction f2(2,3);
    f1.display();
    f2.display(); 
    // ADD  f1 and f2 
    Fraction f3 = f1+f2;  // f1 + f2 = f1.add(f2)
    f3.display();

}  // similarly can make multiply and divivde 