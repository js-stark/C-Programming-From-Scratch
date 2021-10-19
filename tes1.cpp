#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the number of rows required"<<endl;
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int num1=i;
        int num2 = 2*i-2;
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        for(int k=1; k<=i; k++){
            cout<<num1;
            num1++;
        }

        for(int l=1; l<=i-1; l++){
            cout<<num2;
            num2--;
        }
        cout<<"\n";
    }

    return 0;
}
