#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    int value=0;

    while(i<=n){

        if(i%2==0){
            value=1;
        }
        else{
            value=0;
        }


        int count = 1;
        while(count<=i){
            if(value==0){
                value=1;
                cout<<value;
            }
            else{
                value=0;
                cout<<value;
            }
            count++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}
