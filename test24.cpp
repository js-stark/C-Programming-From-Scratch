#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }

        int incr = 1;
        int j = i;
        while(incr<=i){
            cout<<j;
            j++;
            incr++;
        }

        int decr = 1;
        int k = 2*i - 2;

        while(decr<=i-1){
            cout<<k;
            decr++;
            k--;
        }

        cout<<endl;
        i++;
    }

    return 0;
}
