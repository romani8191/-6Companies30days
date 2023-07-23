#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n : \n";
    cin>>n;
    cout<<endl;
    cout<<endl;

    int count =0;
    for(int i=0;i<=n;i++){
        count=count+i;
        cout<<count<<endl;

    }

    cout<<endl;
    cout<<endl;
    cout<<"Final sum is "<<count<<endl;
}