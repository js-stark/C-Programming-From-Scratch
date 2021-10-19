#include<iostream>
using namespace std;

void print(int n){

    int count =1;
    int sum = 0;
    while(count<=n){
        if(count%2==0){
            sum+=count;
        }
        else{
            sum+=(-1*count);
        }
        count++;
    }

    cout<<sum;

}

int main(){

    int n;
    cin>>n;
    print(n);
    return 0;
}
