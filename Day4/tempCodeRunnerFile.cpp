#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no. u want to check: ";
    cin>>n;

    bool prime=1;
    for(int i=2; i<n; i++){
        int result= n%i;
        if(result==0){
            prime=0;          
            break;
        }
    }

    if (prime==0){
        cout<<"composit";
    }
    else{
        cout<<"prime";
    }
}
