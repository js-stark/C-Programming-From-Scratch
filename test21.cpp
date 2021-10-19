#include<iostream>
using namespace std;

int main(){

    /*int n;
    cin>>n;

    int rev = 0;
    int count = 0;

    while(n!=0){
        int binary_digit = n%2;
        if(binary_digit==1) count+=1;
        //cout<<binary_digit;
        rev = rev*10 + binary_digit;
        //int rev = rev + binary_digit;
        n = n/2;
    }

    cout<<rev<<endl;
    cout<<count;*/

    int n;
    cin>>n;

    int sum = 0;


    while(n!=0){
        sum += (n&1);
        n=n>>1;
    }
    cout<<sum;
    return 0;
}
