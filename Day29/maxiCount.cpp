#include<bits/stdc++.h>
using namespace std;

int MaxConsicutive(int n, int array[]){
    int count=0;
    int maxi=0;
    for (int i=0;i<n;i++){
        if(array[i]==1){
            count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int maximum=MaxConsicutive( n,  array);
    cout<<"the maximum consicutive value in the given array is: "<<maximum;
    return 0;
}