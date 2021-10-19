#include<iostream>
#include"test85.cpp"
using namespace std;


int main(){
    //Creating Statically

    student s1(99);
    s1.setAge(10);
    //s1.marks = 99;

    s1.print();




    //Creating Dyanamically

    student *s2 = new student(88);
    s2->setAge(18);
    //s2->marks = 98;

    s2->print();

    return 0;
}
