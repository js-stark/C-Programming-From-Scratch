#include<iostream>
using namespace std;

void binarySearch(int a[],int n,int e){
    int start = 0;
    int end = n-1;

    while(end>start){
        int mid = (start+end)/2;

        if(a[mid]==e){
            cout<<"Element Found at "<< mid;
            break;
        }
        else if(a[mid]>e){
            end = start - 1;
        }
        else{
            start = mid + 1;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int e;
    cout<<"Enter the element to search";
    cin>>e;

    binarySearch(a,n,e);

    return 0;
}
