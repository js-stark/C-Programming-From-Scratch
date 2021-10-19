#include<iostream>
using namespace std;


void fibo(int n){

    int temp;
    int out = 0;
    int count = 1;

    for(int i=0;i<=n;i++){
        temp = out;
        cout<<out<<" ";
        out = out + count;
        count = temp;
    }

}


void print(int n){

        int temp;
        int out = 0;
        int count = 1;

        for(int i=1; i<=n;i++){

            for(int j=1;j<=i;j++){
                temp = out;
                cout<<out<<"\t";
                out+=count;
                count =temp;
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
