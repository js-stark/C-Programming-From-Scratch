#include<iostream>
using namespace std;


class student{
private:
    int age;
public:
    int marks;

    student(int b){
        marks = b;
        cout<<"constructor is called"<<endl;
    }

    void setAge(int a){
        age = a;
    }

    void print(){
        cout<<"The age is "<<age<<" with marks "<<marks;
    }

};
