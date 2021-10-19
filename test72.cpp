#include<iostream>
using namespace std;


int main(){


    int i = 10;
    int *p = &i;

    cout<<i<<endl;
    cout<<*p<<endl;

    i = 23;
    cout<<i<<endl;

    *p = 54;

    cout<<i;


    return 0;
}
