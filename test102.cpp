#include<iostream>
using namespace std;

class time{
int hours;
int minutes;

public:
    time(int hours,int minutes){
        this->hours = hours;
        this->minutes = minutes;
    }

    void operator ++(int){
        minutes++;
        if(minutes>60){
            hours+=1;
            minutes-=60;
        }
    }

    void display(){
        cout<<hours<<" : "<<minutes;

    }

};


int main(){
    time t1(6,60);

    t1++;
    t1.display();

    return 0;
}
