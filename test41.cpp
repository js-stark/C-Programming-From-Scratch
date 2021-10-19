#include<iostream>
using namespace std;


void swapping(int &x, int &y){

    int temp = x;
    x = y;
    y = temp;
}

int main(){

    int a=7,b=6;

    swapping(a,b);

    cout<<a<<b;


    return 0;
}
