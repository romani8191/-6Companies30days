#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int array[],int n){
    for(int i=n-1; i>=0; i--){
        int swap=0;
        for(int j=0;j<=i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0){
            break;
        }
        cout<<"run"<<"\n";
    }
}

int main(){
    //array formattion
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    BubbleSort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    
    return 0;
}