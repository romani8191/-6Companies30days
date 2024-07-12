#include<bits/stdc++.h>
using namespace std;

void pattern7(int n){
    for(int i=0;i<n;i++){
        //print blanks
        for(int j=0;j<n-i-1;j++){
            cout<<"-";
        }

        //print stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        //print blanks
        for(int j=0;j<n-i-1;j++){
            cout<<"-";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern7(n);
}