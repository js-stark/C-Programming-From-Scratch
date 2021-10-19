#include<iostream>
#include<cmath>
using namespace std;

class Fraction{
private:
    int num;
    int den;

public:
    Fraction(int num,int den){
        this->num = num;
        this->den = den;
    }

    void print(){
        cout<<num<<"/"<<den<<endl;
    }

    void add(Fraction const & f2){
        int lcm = den * f2.den;
        int x = f2.den;
        int y = den;

        num = num*x + f2.num*y;
        den = lcm;
    }

    void mul(Fraction const & f2){
        num = num*f2.num;
        den = den*f2.den;

        this->simplify();
    }

    void simplify(){
        int gcd;
        int small = min(num,den);
        for(int i=small;i>=1;i--){
            if(num%i==0 && den%i==0){
                gcd = i;
                break;
            }
        }
        cout<<"gcd is "<<gcd<<endl;
        num = num/gcd;
        den = den/gcd;
    }

};


int main(){

    Fraction f1(10,2);
    Fraction f2(5,3);
    /*f1.print();
    f1.add(f2);
    f1.print();
    f1.simplify();
    f1.print();*/

    f1.print();
    f2.print();

    f1.mul(f2);

    f1.print();



    return 0;
}
