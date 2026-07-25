#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int*arr;

    Vector(){
        size = 0;
        capacity = 1;      // deafault constructor
        arr = new int[1];

    }

    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int*arr2 = new int[capacity];    // new array formed and copy ele form old arra and again assigh them
            for(int i=0; i<size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = ele;
        size++;       // size < capacity  
    }

    void print(){
        for(int i=0; i<size; i++){  
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Vector v1;
    v1.add(10);
    v1.print();
    v1.add(11);
    v1.print();
    v1.add(12);
    v1.print();
    
}






