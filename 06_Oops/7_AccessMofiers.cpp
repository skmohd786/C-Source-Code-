#include<iostream>
using namespace std;
class Student{
public:
    int rollno;
    string name;

    Student(int rollno, string name, float marks){
        this->rollno = rollno;
        this->name = name;
        this->marks = marks;
    }

    float get(){       // inside class, print or change of private data occured 
        return marks;
    }
    void set(float n){
        marks = n;     
    }

private:
    float marks;
};

int main(){
    Student s1(23,"mohd",45.2); 
    cout<<s1.get()<<endl;  // for print 
    s1.set(48.3);  // for change 
    cout<<s1.get()<<endl;

}
