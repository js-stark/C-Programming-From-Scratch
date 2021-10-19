#include<iostream>
using namespace std;

class student{

public:

    int rollNo;
    int age;


};

int main(){
    //Creating objects statically
    //student s1;
    //student s2;
    //student s3,s4,s5;


    ///Creating objects dynamically;

    student *s6 = new student;

    (*s6).age = 23;
    (*s6).rollNo = 30;

    s6->age = 23;
    s6->rollNo = 23;

    //s1.age = 24;
    //s1.rolNo = 2244;

    //cout<<s6.age<<" "<<s6.rollNo;


    return 0;
}
