#include<bits/stdc++.h>
using namespace std;


void springAlgo(vector<vector<int>> v,int m,int n){

    int start = 0;
    int end = 0;
    int count = 0;

    /*while(count<m*n){
        for(int i=0;i<)
    }*/

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==m-1){
               cout<<v[i][j]<<" ";
            }

        }
    }
}


int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int>> v(m,vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    springAlgo(v,m,n);

/*for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }*/

    return 0;
}
