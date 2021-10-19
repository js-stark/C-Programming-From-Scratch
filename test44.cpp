#include<iostream>
using namespace std;

void print(int n){

    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            if(i<=2){
                cout<<1;
            }
            else{
                if(j==1||j==i) cout<<i-1;
                else cout<<0;
            }
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
