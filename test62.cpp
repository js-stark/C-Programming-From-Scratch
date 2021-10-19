#include<iostream>
#include<cmath>
using namespace std;


void print(int n){

    int num= n;
    int count = 0;

    while(num!=0){
        int term = num%10;
        num /=10;
        count++;
    }

    int sum = 0;
    int asnum = n;

    while(asnum!=0){
        int term = asnum%10;
        sum+= pow(term,count);
        asnum /=10;
    }

    sum == n?cout<<true:cout<<false;

}


int main(){

    int n;
    cin>>n;

    print(n);

    return 0;
}
