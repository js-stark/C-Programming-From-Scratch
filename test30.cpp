#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int largest = INT_MIN;

    for(int j=0; j<n; j++){
        if(a[j]>largest) largest = a[j];
    }

    cout<<largest;


    return 0;
}
