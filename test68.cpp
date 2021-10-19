#include<iostream>
using namespace std;

void print(int n){

    int num = n;
    int count =0;
    int odd=0;
    int even = 0;

    while(num!=0){
        int term = num%10;
        if(term%2==0){
            even+=term;
        }
        else{
            odd+=term;
        }
        num/=10;
        count++;
    }

    if(odd%3==0||even%4==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }



}

int main(){

    int n;
    cin>>n;

    print(n);

    return 0;
}

