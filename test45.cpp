#include<iostream>
using namespace std;

void print(int n){

    int mid = (n+1)/2;

    for(int i=1; i<=n; i++){
        if(i==1||i==n||i==mid){
            for(int j=1; j<=n;j++){
                if(i==1&&j>1&&j<mid){
                    cout<<" ";
                }
                else if(i==n&&j>mid&&j<n){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }

            }

        }
        else{
            if(i<mid){
                for(int k=1;k<=mid;k++){
                    if(k==1||k==mid) cout<<"*";
                    else cout<<" ";
                }

            }
            else{
                for(int k=1;k<=n;k++){
                    if(k==mid||k==n) cout<<"*";
                    else cout<<" ";

                }

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
