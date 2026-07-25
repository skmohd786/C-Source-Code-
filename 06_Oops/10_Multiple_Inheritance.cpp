#include<iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
    int average;
};
class Engineer{
public:
    int experience;
    string domain;
};

class talent : public Cricketer , public Engineer {   // one class have traits of two or more classes 
public: 
    string name;
};

void print(talent t){
    cout<<t.runs<<" "<<t.wickets<<" "<<t.domain<<" "<<t.experience<<endl;
}

int main(){
    talent t1;
    t1.runs = 120000;
    t1.wickets= 12;
    t1.domain = " data science engineer ";
    t1.experience = 12;
    print(t1); // pass onject to a function


}