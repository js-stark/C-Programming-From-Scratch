#include<iostream>
using namespace std;


void print(int n){

    char c = n;

    if(c>='a' && c<='z'){
        cout<<"lowercase";
    }
    else if(c>='A' && c<='Z'){
        cout<<"UPPERCASE";
    }
    else{
        cout<<"Invalid";
    }

}


int main(){

    int n;
    cin>>n;
    print(n);

}
