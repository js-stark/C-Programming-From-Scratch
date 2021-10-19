#include<iostream>
#include<vector>
using namespace std;

class student{
public:
    student(){
        cout<<"constructor called";
    }

};


int main(){

    vector<student> v;
    vector<bool> b(100,true);

    return 0;
}
