#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int space = 1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int count=1;
        int j=1;
        while(count<=2*i-1){
            cout<<j;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
