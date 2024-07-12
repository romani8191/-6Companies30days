#include<bits/stdc++.h>
using namespace std;


int main(){
    //creating the array of n elements;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    //creating the hashed array
    int hash[13]={0};
    for (int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    // counting
    int k;
    cin>>k;
    while(k--){
        int num;
        cin>>num;

        cout<<hash[num]<<endl;
    }

    return 0;
}