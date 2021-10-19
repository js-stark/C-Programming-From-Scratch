#include<iostream>
using namespace std;

int main(){

    //Dynamic memory allocation;

    /*int *i = new int;
    *i = 10;

    cout<<i<<endl<<*i;*/

    int n;
    cin>>n;

    int *a = new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest = a[i];
        }
    }
    cout<<largest;

    return 0;

}
