#include<iostream>
using namespace std;

enum student{male,female};

int main(){
    string n;
    cin>>n;
    student type=n;


    switch (type){

        case male:
            cout<<"Male gen";
            cout<<sizeof(male);
            break;
        case female:
            cout<<"Female gen";
            break;
        default:
            cout<<"Invalid";

    }

    return 0;
}

