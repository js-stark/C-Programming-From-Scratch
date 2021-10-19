#include<iostream>
using namespace std;


void print(int n1, int n2){

    int i=1;
    int count = 1;

    while(count!=n1+1){
        int term = 3*i +2;
        i++;
        if(term%n2!=0){
            cout<<term<<endl;
            count++;
        }
    }

}


int main(){
    int n1,n2;
    cin>>n1>>n2;

    print(n1,n2);

    return 0;
}
