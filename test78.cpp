#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int *a = new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maximum = INT_MIN;

    for(int i=0;i<n;i++){
        a[i]>maximum ? maximum=a[i]:maximum=maximum;
    }

    cout<<maximum;


    return 0;
}
