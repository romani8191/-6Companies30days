#include<bits/stdc++.h>
using namespace std;

int pro(int n){
    int p=0;
    for(int i=0;i<n;i++){
        p=p*i;
    }
    return p;
}

int main(){
    int N;
    cin>>N;
    int a=pro(N);
    cout<<a;
}