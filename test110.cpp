#include<iostream>
#include<vector>
using namespace std;


int main(){
    cout<<"Enter the number of rows and cols"<<endl;
    int m,n;
    cin>>m>>n;


    vector<vector<int> > v;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    int data;
    cin>>data;
    v[i].push_back(data);
    }}

    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

    cout<<v[i].at(j);
    }}

    return 0;
}
