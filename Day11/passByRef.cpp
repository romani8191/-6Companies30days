#include<bits/stdc++.h>
using namespace std;

int product(int &num1, int &num2){
    int num3=num1*num2;
    return num3;
}

int main(){
    int a,b;
    cout<<"Enter the 2 nos. : "<<endl;
    cin>>a;
    cin>>b;
    int result=product(a,b);
    cout<<result;

    return 0;
}