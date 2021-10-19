#include<iostream>
using namespace std;


class student{
public:
    int age;
    int roll;

};


int main(){

    student *s1 = new student;
    student *s2 = new student;


    //(*s1).age = 21;
    //(*s1).roll = 2019104015;

    s1->age = 21;
    s1->roll = 2019104015;


    cout<<s1->age<<" "<<s1->roll;

    return 0;
}
