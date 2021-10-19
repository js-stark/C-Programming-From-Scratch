#include<iostream>
using namespace std;



int length(char a[]){

    int count =0;
    while(a[count]!='\0'){
        count++;
    }

    return count;

}


int main(){

    char a[10];
    cin.getline(a,10,'o');

    cout<<a;

    cout<<length(a);

    return 0;
}
