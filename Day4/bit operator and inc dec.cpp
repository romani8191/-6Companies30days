#include<iostream>
using namespace std;

int main(){

    int a=4;
    int b=6;

    //bit operators
    cout <<"a&b "<<(a&b)<<endl;
    cout <<"a|b "<<(a|b)<<endl;
    cout <<"~b "<<~b<<endl;
    cout <<"a^b "<<(a^b)<<endl;

    //right and left shift

    cout<<(17>>2)<<endl;
    cout<<(17>>1)<<endl;

    //inc dec pre post
    cout<<(++a)<<endl;
    cout<<(a++)<<endl;
    cout<<(--a)<<endl;
    cout<<(a--)<<endl;

}