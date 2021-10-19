#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int sum = 0;

    while(n!=0){
        int ldigit = n%10;
        cout<<ldigit;
        n /=10;
    }

    return 0;
}
