#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : \n";
    cin>>n;
    cout<<endl;
    cout<<endl;

    int a=0 ,b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=1; i<=n; i++){
        int nextnum=a+b;
        cout<<nextnum<<" ";

        a=b;
        b=nextnum;
    }
}