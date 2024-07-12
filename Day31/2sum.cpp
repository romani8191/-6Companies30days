#include<bits/stdc++.h>
using namespace std;

string CheckSum(int n, int array[], int k){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum=array[i]+array[j];
            if(k==sum)
            return "YES";
        }
    }
    return "NO";
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
    string req=CheckSum(n,  array,  k);
    cout<<"the required elements are: "<<req;
    return 0;
}