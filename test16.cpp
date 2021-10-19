#include<iostream>
using namespace std;

int main(){

    char a;
    cin>>a;

    switch(a){

        case 'M':
            cout<<"Monday"<<endl;
            break;

        case 'T':
            cout<<"Tuesday"<<endl;
            break;
        case 'W':
            cout<<"Wednesday"<<endl;
            break;
        case 'S':
            cout<<"Sunday"<<endl;
            break;

        default:
            cout<<"Invalid input"<<endl;


    }

    return 0;
}
