#include<iostream>
using namespace std;

class student{

private:
    int age;
public:
    int marks;

    void setAge(int a){
        age = a;
    }

    void print(){
        cout<<marks<<" "<<age;
    }

    student(){

    }


};

