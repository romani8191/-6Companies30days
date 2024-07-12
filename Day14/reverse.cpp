#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int temp=0;
    while(n>0){
        int digit=n%10;
        temp=(temp*10) + digit;
        n=n/10;
    }

    return temp;
    
}

int main(){
    int N;
    cin>>N;
    int req=reverse(N);
    cout<<req<<endl;
    return 0;
}