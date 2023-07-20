#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int i=0;

    while(i<n){
        sum=sum+2;
        cout<<sum<<endl;
        i=i+2;

    }


    cout<<"Total sum of even nos is "<<sum<<endl;

}