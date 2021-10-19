#include<iostream>
#include<string>
using namespace std;


class Count{
    friend void setx(Count &c,int x);
private:
    int x;
public:
    Count():x(0){
    }

    int getx(){
        return x;
    }



};


void setx(Count &c,int x1){
    c.x = x1;
}

int main(){

    Count c1;

    setx(c1,9);

    cout<<c1.getx();


    return 0;
}
