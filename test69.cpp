#include<iostream>
using namespace std;

void print(int n){

    int num =n;
    int count =0;
    int digit = 1;
    int original = 0;

    while(num!=0){
        int term = num%10;

        (9-term)<term ? term=(9-term):term=term;

        original+=term*digit;
        digit*=10;
        num/=10;
        count++;
    }

    cout<<original;

}

int main(){

    int n;
    cin>>n;

    print(n);

    return 0;
}

