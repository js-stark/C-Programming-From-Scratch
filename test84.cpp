#include<iostream>
#include"test83.cpp"
using namespace std;


int main(){
    student *s1 = new student;
    s1->marks = 21;
    s1->setAge(18);

    s1->print();
    return 0;
}
