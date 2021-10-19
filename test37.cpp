#include<iostream>
using namespace std;


int check_prime(int n){

    /*int i=2;

    while(i<n){
        if(n%i==0){
            return 0;
            break;
        }
        i++;
    }

    if(i==n){
        return 1;
    }*/

    int i=2;

    for(i; i<n; i++){
        if(n%i==0){
            return 0;
            break;
        }
    }

    if(i==n){
        return 1;
    }

}


int main(){

    //check_prime(7) == 1 ? cout<<"prime":cout<<"Not prime";

    switch(check_prime(10)){

        case 1:
            cout<<"Prime";
            break;
        case 0:
            cout<<"Not prime";
            break;
        default:
            cout<<"unknown";


    }
    //cout<<x;

    return 0;
}
