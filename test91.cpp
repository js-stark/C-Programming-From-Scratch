#include<iostream>
using namespace std;


void sortDesc(int a[],int n){

    int start = 0;
    int end = n-1;
    int count = n;
    //int maximum = a[start];

    while(end>start){
        for(int i=start;i<n;i++){
            if(a[i]>a[start]){
                swap(a[i],a[start]);
            }
        }
        start++;
        count--;
    }
}

void binarySearch(int a[],int n,int e){
    int start = 0;
    int end = n-1;
    int mid = n/2;

    while(end>=start){
        if(a[mid]==e){
            cout<<"Elements found at "<<mid;
            break;
        }
        else if(a[mid]<e){
            end = mid-1;
            mid = mid/2;
        }
        else{
            start = mid+1;
            mid +=(mid+1)/2;
        }
    }

}


int main(){

    ///Initialising the statements
    int n,e;
    cin>>n;

    int a[n];

    ///Taking the inputs

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ///Sorting the elements

    sortDesc(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;

    cout<<"Enter the element to find"<<endl;

    cin>>e;

    binarySearch(a,n,e);

    return 0;
}
