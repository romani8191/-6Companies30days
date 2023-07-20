#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int num=2;

    while(num<=n){
        if (n%num==0){
            cout<<"composit" <<endl;
        }
        else{
            cout<<"Prime" <<endl;
        }
        num++; 

    }

}