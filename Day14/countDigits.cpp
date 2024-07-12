#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int counter=0;
    while(n>0){
        counter=counter+1;
        n=n/10;
    }
    return counter;
}

int main(){
    cout<<"Enter the input "<<endl;
    int n;
    cin>>n;
    cout<<"The no. of digits are: "<<count(n)<<endl;

    return 0;
}