#include<iostream>
using namespace std;


void linearSearch(int a[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            cout<<"Present at index "<<i<<endl;
            break;
        }
    }

    if(i==n){
        cout<<"Not found fucker"<<endl;
    }

}


int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cout<<"Enter the key to search"<<endl;

    cin>>key;

    linearSearch(a,n,key);

    return 0;
}
