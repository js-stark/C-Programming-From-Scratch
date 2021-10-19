#include<iostream>
using namespace std;

void print(int ll,int ul, int step){

    int count=ll;
    while(count<=ul){
        int C = (5.0/9)*(count-32);
        cout<<count<<"\t"<<C<<endl;
        count+=step;
    }

}


int main(){

    int mini,maxi,step;
    cin>>mini>>maxi>>step;

    print(mini,maxi,step);

    return 0;
}
