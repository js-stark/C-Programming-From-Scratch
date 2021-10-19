#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;


    int i=2;

    while(i<n){

        if(n%i==0){
            cout<<"Its not prime";
            break;
        }
        i++;
    }

    if(i==n){
        cout<<"Its prime";
    }


    return 0;
}
