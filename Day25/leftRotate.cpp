#include<bits/stdc++.h>
using namespace std;

void leftShift(int array[], int n){
    int temp=array[0];
    for (int i=0;i<n-1;i++){
        array[i]=array[i+1];
    }
    array[n-1]=temp;
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    leftShift(array,n);
    return 0;
}