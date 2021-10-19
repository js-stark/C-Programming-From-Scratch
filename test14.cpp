#include<iostream>
using namespace std;

int main(){

    char ch;

    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"Character is upper";
    }

    else if(ch>='a' && ch<='z'){
        cout<<"Character is lower";
    }
    else{
        cout<<"Character is not valid";
    }

    return 0;
}
