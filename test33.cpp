#include<iostream>
using namespace std;

void swapping(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){

    int n;

    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int count = n-1;
    int i = 0;

    while(count > i){
        swapping(a[i],a[count]);
        i++;
        count--;
    }


    for(int i=0; i<n; i++){
        cout<<a[i];
    }




    return 0;
}
