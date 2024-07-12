#include <iostream>
using namespace std;

int checkPlendrome(int n){
    int rev=0;
    while(n>0){
        int digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
        }
        return rev;
}

int main(){

    cout<<"enter the no : "<<endl;
    int N;
    cin>>N;
    int Reverse=checkPlendrome(N);
    if(N==Reverse){
        cout<<"It is a pallendrome"<<endl;
    }
    else{
        cout<<"Not a Pallendrome"<<endl;
    }

    return 0;
}