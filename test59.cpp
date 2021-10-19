#include<iostream>
#include<cstring>
using namespace std;


int main(){

    char a[100];

    cin>>a;

    for(int i=1;i<=strlen(a);i++){
        for(int j=0;j<i;j++){
            cout<<a[j];
        }
        cout<<endl;
    }


    return 0;
}
