#include<iostream>
using namespace std;


class ComplexNumbers{
private:
    int real;
    int img;
public:
    ComplexNumbers(int real,int img){
        this->real = real;
        this->img = img;
    }

    void print(){

        cout<<real<<"+"<<img<<"i"<<endl;

    }

    void add(ComplexNumbers const &c2){
        real = real+c2.real;
        img = img+c2.img;

        print();
    }

    void mul(ComplexNumbers const &c2){
        int real_part = real*c2.real - img*c2.img;
        int img_part = real*c2.img + img*c2.real;

        real = real_part;
        img = img_part;

        print();
    }


};




int main(){

    int real1,img1,real2,img2;

    cin>>real1>>img1>>real2>>img2;

    ComplexNumbers c1(real1, img1);

    ComplexNumbers c2(real2, img2);

    int choice;
    cin>>choice;

    if(choice==1){
        c1.add(c2);
    }

    else if(choice==2){
        c1.mul(c2);
    }

    else{
        cout<<"Choose from choice 1 and 2";
    }


    return 0;
}
