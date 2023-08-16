#include<iostream>
using namespace std;

void counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the no. : "<<endl;
    cin>>n;

    counting(n);
    return 0;
}