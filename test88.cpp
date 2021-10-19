#include<iostream>
using namespace std;


void sort_desc(int a[],int n){

    int start = 0;
    int end = n-1;
    while(end>start){
        if(a[end]>a[start]){
            swap(a[start],a[end]);
            start++;
        }

        //end--;
    }

}

void binarySearch(int a[],int n,int e){


    int start = 0;
    int end = n-1;
    int mid = end/2+1;

    while(end>=start){

        if(a[mid]==e){
            cout<<"Element Found "<<mid;
            break;
        }
        else if(a[mid]<e){
            mid = mid/2;
            end = mid -1;
        }
        else{
            mid+=mid/2;
            start = mid+1;
        }
    }

}

int main(){

    int n,e;
    cin>>n;

    //int a[n];

    int *a = new int[n]; //The array is created inside a heap
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort_desc(a,n);

    //cout<<"Enter the Element you needed to search"<<endl;
    //cin>>e;

    //binarySearch(a,n,e);



    for(int i=0;i<n;i++){
        cout<<a[i];
    }


    //int mid = n+/2;

    return 0;
}

