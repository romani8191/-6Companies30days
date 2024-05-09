#include<bits/stdc++.h>
using namespace std;

void name(string a){
    a[0] = 't';         //pass by value
    cout<<a<<endl;
}

int main(){
    string a="Raj";
    name(a);
    cout<<a<<endl;
    return 0;
}