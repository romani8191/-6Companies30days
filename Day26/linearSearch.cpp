#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n,int array[], int k){
    for(int i=0;i<n;i++){
        if(array[i]== k){
            return i;
        }
        else{
            return -1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int index=linearSearch( n, array,  k);
    cout<<"the required index number is : "<<index;
    return 0;
}