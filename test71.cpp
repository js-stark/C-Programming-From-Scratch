#include<iostream>
using namespace std;

int main(){

    int i=10;
    char j = 20;

    int *p = &i;
    char *p1 = &j;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(p1);


    return 0;
}
