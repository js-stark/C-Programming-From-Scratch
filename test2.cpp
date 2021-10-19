#include<iostream>
using namespace std;

int main(){

    cout<<"Now we gonna calculate the simple interest"<<endl;

    cout<<"Enter the pricipal rate and time in sequence: ";
    int p,r,t;
    cin>>p>>r>>t;

    int SI = p*r*t/100;

    cout<<SI;

    return 0;
}
