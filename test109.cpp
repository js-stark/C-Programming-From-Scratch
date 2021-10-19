#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> *vp = new vector<int>();
    vector<int> v;

    vp->push_back(10);
    vp->push_back(20);
    vp->push_back(20);

    cout<<vp->[0];

    return 0;
}
