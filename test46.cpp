#include<iostream>
using namespace std;

void print(int n){
    // complete this function
    int i, j;

    cout << "*";

    // work for first row
    for (i = 1; i <= (n+1)/2 - 2; i++)
        cout << " ";

    for (i = 1; i <= (n+1)/2; i++)
        cout << "*";
    cout << endl;

    //work till middle row
    for (i = 1; i <= (n+1)/2 - 2; i++)
    {
        cout << "*";

        for (j = 1; j <= (n+1)/2 - 2; j++)
        cout << " ";

        cout << "*";

        cout << endl;
    }

    //work for middle row
    for (i = 1; i <= n; i++)
        cout <<"*";
    cout << endl;

    //work till last row
    for (i = 1; i <= (n+1)/2 - 2; i++)
    {
        for (j = 1; j <= (n+1)/2 - 1; j++)
        cout << " ";

        cout << "*";

        for (j = 1; j <= (n+1)/2 - 2; j++)
        cout << " ";

        cout << "*";

        cout << endl;
    }

    //work of last row
    for (i = 1; i <= (n+1)/2; i++)
        cout << "*";

    for (i = 1; i <= (n+1)/2 - 2; i++)
        cout << " ";

    cout <<"*";

}

int main(){
    int n;
    cin>>n;

    print(n);

    return 0;
}
