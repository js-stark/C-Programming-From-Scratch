#include<iostream>
using namespace std;


int factorial(int n){

    int i=2;
    int prod = 1;
    while(i<=n){
        prod*=i;
        i++;
    }

    return prod;

}


int main(){

    int n;
    cin>>n;

    cout<<factorial(n);

    return 0;
}
