#include<bits/stdc++.h>
using namespace std;

int amrstrong(int n){
    int sum=0;
    int k=to_string(n).length();
    while(n>0){
        int digit=n%10;
        sum=sum+pow(digit, k);
        n=n/10;
    }
    return sum;
}

int main(){
    int N, b;
    cout<<"Enter the number: "<<endl;
    cin>>N;
    b=amrstrong(N);
    if ( N==b){
        cout<<"amrstrong";
    }
    else{
        cout<<"not amrstrong";
    }
}