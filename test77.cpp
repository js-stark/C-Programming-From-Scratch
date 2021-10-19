#include<iostream>
using namespace std;

class Employee{
public:
    string name;
    string company;
    int age;

    void Introduce(){
        cout<<name<<" "<<company<<" "<<age<<endl;

    }





};

int main(){

    Employee employee1;
    employee1.name = "Jason";
    employee1.company = "Tals";
    employee1.age = 26;

    employee1.Introduce();

    Employee employee2;

    employee2.name = "Mania";
    employee2.company = "Flipkart";
    employee2.age = 23;

    employee2.Introduce();


    return 0;

}
