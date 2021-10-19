#include<iostream>
#include<cmath>
using namespace std;


void print(int n){

    int start = 0;
    int end = n;

    while(end>start){

        if(pow(start,2)+pow(end,2)==n){
            cout<<"("<<start<<","<<end<<") ";
            end--;
            start++;
        }
        else if(pow(start,2)+pow(end,2)<n){
            start++;
        }
        else if(pow(start,2)+pow(end,2)>n){
            end--;
        }
    }

}


int main(){

    int n;
    cin>>n;
    print(n);

    return 0;
}
