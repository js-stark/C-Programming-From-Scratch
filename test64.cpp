#include<iostream>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;

    int b[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[j][i];
        }
        cout<<endl;
    }

    return 0;

}
