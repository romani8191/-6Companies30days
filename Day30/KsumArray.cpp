#include<bits/stdc++.h>
using namespace std;

int KSum(int n , int array[], int k ){
    int length=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+array[j];
            if(sum==k){
                length=max(length,j-i+1);
            }
        }
    }
    return length;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int k;
    cin>>k;
    int Len=KSum( n ,  array,  k );
    cout<<"The length of longest sub array is: "<<Len;
    return 0;
}