#include<iostream>
using namespace std;

void print(int n){

    for(int i=1;i<=n+1;i++){

        for(int j=0; j<i-1;j++){
            cout<<"  ";
        }

        for(int j=n-i+1;j>=0;j--){
            cout<<j<<" ";
        }

        int count=1;

        for(int j=n-i+1;j>=1;j--){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<"  ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<i-j+1<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
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
