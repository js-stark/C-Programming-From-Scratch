#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    string s = "abc";
    cout<<s<<endl;

    string s2;
    s2 = "def";
    cout<<s2<<endl;

    string *s3 = new string;
    *s3 = "mno";

    cout<<s3<<endl;
    cout<<*s3<<endl;

    vector<string> v;

    v.push_back(s);
    v.push_back("hello");

    for(int i=0;i<v.size();i++){
        cout<< v[i]<<endl;
        sort(v[i].begin(),v[i].end())
    }

    return 0;
}
