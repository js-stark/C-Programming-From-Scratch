#include<iostream>
using namespace std;

void print(int n){
    int num = n;
    int reverse =0;
    while(num!=0){
        int term = num%10;
        reverse = reverse*10+term;
        num/=10;
    }

    cout<<reverse;

}

int main(){

    int n;
    cin>>n;

    print(n);

    return 0;
}
