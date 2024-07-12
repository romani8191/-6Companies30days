#include<bits/stdc++.h>
using namespace std;

int SecondSmallest(int array[], int n){
    if(n<2){
        return -1;
    }
    int small=INT_MAX;
    int secondSmall=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(array[i]<small){
            secondSmall=small;
            small=array[i];
        }
        else if(array[i]<secondSmall && array[i]!=small){
            secondSmall=array[i];
        }
    }
    return secondSmall;
}

int secondLargest(int array[], int n){
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    if(n<2){
        return -1;
    }
    for(int i=0;i<n;i++){
        if (array[i]>largest){
            secondLargest=largest;
            largest=array[i];
        }
        else if(array[i]>secondLargest && array[i]!=largest){
            secondLargest=array[i];
        }
    }
    return secondLargest;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int secondMin=SecondSmallest(array,n);
    cout<<"The 2 nd min value is : "<<secondMin;

    int secondMax=secondLargest(array,n);
    cout<<"The 2 nd max value is : "<<secondLargest;

    
    return 0;
}