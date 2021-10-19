#include<iostream>
using namespace std;

//int x = 12;

int x = 10;

int main(){
    /*int x = 10;
    cout<<x<<endl;
    cout<<::x;
    return 0;*/
    x = 12;
    int x =10;

    int i;
    for(i=0; i<5; i++){
        x = i;
        cout<<x<<"--"<<::x<<endl; // 0 1 2 3 4 12 12 12 12 12
    }

    cout<<x<<endl; // 4
    ::x = ::x +2; // 14
    cout<<::x<<endl;
    cout<<i<<endl; // 5
}
