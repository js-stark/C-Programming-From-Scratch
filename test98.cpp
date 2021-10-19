#include<iostream>
#include<cstring>
using namespace std;


class Student{
private:
    int age;

public:
    char *name;
    Student(int age,char *name){
        this->age = age;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
        //this->name = name;
    }

    Student(Student const &s){
        this->age = s.age;
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }

    void print(){

        printf("%d %s\n",age,name);
    }

};


int main(){
    char name[] = "abcd";
    Student s1(20,name);

    Student s2(s1); ///Copy COnstructor called
    s2.name[0] = 'x';

    s1.print();
    s2.print();

    return 0;
}
