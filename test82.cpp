#include <iostream>
using namespace std;

class student{
public:
    int roll;
private:
    int age;
public:
    void display(){
        cout<<roll<<" "<<age;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age = a;
    }

};


int main(){

    student s1;
    //s1.age = 21;
    //s1.setAge(15);
    s1.roll = 100;
    s1.display();
    cout<<s1.getAge();


    return 0;
}
