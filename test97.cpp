#include<iostream>
using namespace std;

class Student{
    int age;
    char *name;

public:
    Student(int age,char *name){
        this->age = age;
        this->name = name;

    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }




};

int main(){

    char name[] = "Jayasoruban";
    Student s1(20,name);

    s1.display();


    return 0;
}
