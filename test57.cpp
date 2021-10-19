#include<iostream>
using namespace std;


int length(char a[]){

    int count =0;
    while(a[count]!=0){
        count++;
    }
    return count;
}

void reversed(char a[]){

    int start=0;
    int end = length(a)-1;
    while(end>start){
        swap(a[start],a[end]);
        start++;
        end--;
    }

    cout<<a;

}


int main(){

    char a[100];
    cin.getline(a,100);

    //cout<<length(a);
    reversed(a);


}
