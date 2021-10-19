#include<iostream>
using namespace std;

void print(int a[],int n){

    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
}

int sum(int a[],int n){

    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }

    return sum;

}

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<sum(a,5);

    return 0;
}
