#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){
    int num3 =num1+num2;
    cout<< num3;
}

int main(){
    int a,b;
    cout<<"Enter the val of a: ";
    cin>>a;
    cout<<"Enter the val of b: ";
    cin>>b;

    int result=sum(a,b);
    return result;

}