#include<iostream>
using namespace std;

void print(int n,int c,int m){

    int sum = n/c;
    int wrap = sum;
    while(wrap>=m){
        int chocolate = wrap/m;
        wrap = chocolate+(wrap-m*chocolate);
        sum+=chocolate;
    }
    cout<<sum;
}

int main(){

    int t,n,c,m;

    int count =1;
    cin>>t;
    while(count<=t){
        cin>>n>>c>>m;
        print(n,c,m);
        count++;

    }



}
