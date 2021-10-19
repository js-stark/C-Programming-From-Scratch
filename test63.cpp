#include<iostream>
#include<cmath>
using namespace std;


void print(int a,int b,int c){

    float decorator = pow((float)(pow(b,2) - 4*a*c),0.5)  ;

    float root1 = (-b + decorator)/2*a;
    float root2 = (-b-decorator)/2*a;

    if(isnan(root1)){
        cout<<"Imaginary";
    }
    else if(root1!=root2){
        cout<<"Real and Distinct"
        root1>root2 ? cout<<root2<<" "<<root1:cout<<root1<<" "<<root1;
    }
    else if(root1==root2){
        cout<<"Real and Equal"
        cout<<root1<<" "<<root2;
    }
    //cout<<decorator;
}

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    print(a,b,c);

    return 0;
}
