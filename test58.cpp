#include<iostream>
#include<cstring>
using namespace std;


int length(char a[]){

    int count = 0;
    while(a[count]!='\0'){
        count++;
    }

    return count;

}


bool strcompare(char a[],char b[]){

    if(length(a)==length(b)){
        int count =0;
        while(count<length(a)){
            if(a[count]-b[count]==0){
                count++;
            }
            else{
                return 1;
            }
        }
        return 0;
    }
    return 1;
}

void strcopy(char b[],char a[]){

    int count =0;
    while(a[count] !='\0'){
        b[count] = a[count];
        count++;
    }
    b[count] = '\0';

}

void strconcat(char str1[], char str2[]){

        int count =0;
        int i = length(str1);
        while(str2[count] !='\0'){
            str1[i] = str2[count];
            count++;
            i++;
        }

        str1[i] = '\0';

}


int main(){

    char a[100],b[100];

    cin>>a>>b;

    strconcat(a,b);

    cout<<a<<" "<<b;

    return 0;
}
