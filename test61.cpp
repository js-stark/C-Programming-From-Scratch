#include<iostream>
using namespace std;


void print(int n){

    int mid = (n+1)/2;

    int start = (n/2)+1;
    int end = start;

    int d_start = 2;
    int d_end = n-1;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            if(i<=mid){
                if(j>start&&j<end){
                cout<<" "<<"\t";
                }
                else{
                    cout<<"*"<<"\t";
                }
            }
            else{
                if(j>d_start&&j<d_end){
                cout<<" "<<"\t";
                }
                else{
                    cout<<"*"<<"\t";
                }
            }

        }
        cout<<endl;
        if(i<=mid){
            start--;
            end++;
        }
        else{
            d_start++;
            d_end--;
        }


    }


}


int main(){

    int n;
    cin>>n;

    print(n);

    return 0;

}
