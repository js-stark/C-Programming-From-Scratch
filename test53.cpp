#include<iostream>
using namespace std;


void print(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }

        for(int j=0;j<i-1;j++){
            cout<<"*"<<" ";
        }

        if(i>=3){
            for(int j=1;j<=i-2;j++){
                cout<<"*"<<" ";
            }
        }

        cout<<endl;
    }

}


int main(){

    int n;
    cin>>n;

    print(n);

    return 0;
}

