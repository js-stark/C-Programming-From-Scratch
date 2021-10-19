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

void ncr(int n, int r){
    int num = factorial(n);
    int den = factorial(n-r);
    int ext = factorial(r);

    cout<<(num)/(den*ext);
}

int main(){

    int n,r;
    cin>>n>>r;
    ncr(n,r);

    //cout<<factorial(5);
}
