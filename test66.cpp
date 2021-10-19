#include<iostream>
using namespace std;


void print(int n){

    int count =2;
    while(count<n){
        if(n%count==0){
            cout<<"Not Prime";
            break;
        }
        count++;
    }

    if(count==n){
        cout<<"Prime";
    }

}


int main(){

    int n;
    cin>>n;

    print(n);
    return 0;

}
