#include<iostream>
using namespace std;


class Room{
private:
    int length;
    int breadth;
public:

    friend istream &operator >> (istream &input,Room &r){
        input >> r.length >>r.breadth;
        return input;
    }

};


int main(){

    Room r1;

    cin>> r1; // operator >> (cin,r1)
    return 0;
}
