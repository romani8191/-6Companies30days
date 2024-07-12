#include<bits/stdc++.h>
using namespace std;

int pro(int n){
    int p=1;
    for(int i=1;i<=n;i++){
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