#include<iostream>
using namespace std;

int main(){
    cout<<"Enter two numbers sepeated by space to be multiplied"<<endl;
    int a,b;
    cin>>a>>b;

    int sum = 0;
    int prod = 1;

    for(int i=1; i<=b; i++){
        sum+=a;
        prod*=a;
    }
    cout<<sum<<endl;
    cout<<prod;
    return 0;
}
