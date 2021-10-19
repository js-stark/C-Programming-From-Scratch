#include<iostream>
#include<cmath>

using namespace std;

int n=5;

void print(int a[][n],int m, int n){

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}

int main(){

    int m;
    cin>>m;

    int a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    print(a,m,n);

    return 0;

}
